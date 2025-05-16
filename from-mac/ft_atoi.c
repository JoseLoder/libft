/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:45:06 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/16 20:47:09 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;
	int	j;

	result = 0;
	sign = 1;
	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9' || (str[i] == '-' && j == 0))
		{
			if (str[i] == '-')
			{
				sign = -1;
			}
			else
			{
				if (result > (2147483647 / 10) || (result == (2147483647 / 10)
						&& (str[i] - '0') > 7))
				{
					return ((sign == 1) ? 2147483647 : -2147483648);
				}
				result = result * 10 + (str[i] - '0');
			}
			j++;
		}
		else if (j > 0)
		{
			return (result * sign);
		}
		i++;
	}
	return (result * sign);
}
