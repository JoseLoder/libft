/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:14:16 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 14:02:05 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t i;

	src_len = ft_strlen(src);

	if (size == 0)
	{
		return (src_len);
	}

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (src_len);
}