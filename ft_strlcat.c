/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:32:20 by jose-mim          #+#    #+#             */
/*   Updated: 2025/04/30 16:38:15 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;
	size_t i;
	size_t j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	// Si el tamaño del buffer es menor o igual a la longitud de dst,
		no se puede concatenar
	if (size <= dst_len)
		return (size + src_len);

	i = dst_len;
	j = 0;

	// Copiar src a dst mientras haya espacio disponible
	while (i < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}

	// Asegurar que dst esté terminado en '\0'
	dst[i] = '\0';

	// Retornar la longitud total que se intentó crear
	return (dst_len + src_len);
}