/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:25:28 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 20:48:39 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ptr;

	last_ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last_ptr = ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return (char *)(s);
	}
	return (last_ptr);
}
