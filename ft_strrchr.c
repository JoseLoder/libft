/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:25:28 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 19:34:08 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	character;
	unsigned char	*last_ptr;

	last_ptr = NULL;
	character = (unsigned char)c;
	while (*s)
	{
		if (*s == character)
		{
			last_ptr = ((unsigned char *)s);
		}
		s++;
	}
	if (character)
	{
		return ((char *)s);
	}
	return ((char *)(last_ptr));
}
