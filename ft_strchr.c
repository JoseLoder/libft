/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:02:30 by jose-mim          #+#    #+#             */
/*   Updated: 2025/04/30 17:22:47 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char character;

	character = (unsigned char)c;

	while (*s != '\0')
	{
		if (*s == character)
			return ((char *)s);
		s++;
	}
	// Verificar si c es '\0' y devolver un puntero al final de la cadena
	if (character == '\0')
		return ((char *)s);

	return ('\0');
}