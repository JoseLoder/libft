/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:03:49 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 18:27:42 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	if (!s)
	{
		return (NULL);
	}
	slen = ft_strlen(s);
	if (start >= slen)
	{
		return (NULL);
	}
	if (start + len > slen)
	{
		len = slen - start;
	}
	sub = (char *)malloc(len + 1);
	if (!sub)
	{
		return (NULL);
	}
	ft_strlcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
