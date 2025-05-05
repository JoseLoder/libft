/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:20:01 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/05 18:52:08 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t index;

	i = 0;
	j = 0;
	index = 0;
	while (i < len && big[i] != '\0')
	{
		if (little[j] == '\0')
		{
			index = i - j;
			return ((char *)&big[index]);
		}
		if (big[i] == little[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (NULL);
}