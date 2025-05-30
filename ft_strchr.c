/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:02:30 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 19:31:06 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == character)
		{
			return ((char *)s);
		}
		s++;
	}
	if (character == '\0')
		return ((char *)s);
	return (NULL);
}
