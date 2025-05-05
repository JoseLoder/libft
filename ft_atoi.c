/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:57:45 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/05 20:25:15 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_isdigit(int digit)
{
	if (digit >= '0' && digit <= '9')
		return (1);
	else
		return (0);
}
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
	{
		return ((size_t)src_len);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)src_len);
}

size_t	*ft_strdigitcpy(char *dst, const char *src)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[i])
	{
		if (ft_isdigit(src[i]))
		{
			j++;
		}
		else if (j > 0)
		{
			return ((size_t)ft_strlcpy(dst, &src[k], i));
		}
		i++;
		k = i - j;
	}
	return ((size_t)ft_strlcpy(dst, &src[k], i));
}
int	main(void)
{
	char		*buffer[10];
	const char	*str = "abc123def456";
	size_t		result;

	result = (size_t)ft_strdigitcpy(buffer, str);
	if (result)
		printf("First sequence of digits starts at: %s\n", buffer);
	else
		printf("No digits found in the string.\n");
	return (0);
}

/*
int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		digit;
	int		pow;

	i = 0;
	j = 0;
	k = 0;
	digit = 0;
	pow = 0;
	while(nptr[i] != '\0')
	{
		if(ft_isdigit(nptr[i])){
			if (j == 0){
				digit = nptr[i] - 48;
			}else {
				while(k < j){
					if(pow == 0)
					{
						pow = 10;
					}else
					{
						pow *= 10;
					}
					k++;
				}
				digit += (nptr[i] - 48) * pow;
				k = 0;
				pow = 0;
			}
			j++;
		}else if(j > 0){
			return (digit);
		}
		i++;
	}
}
*/