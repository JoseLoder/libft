/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:03:49 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/16 21:53:19 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	if (!s)
	{
		return (NULL);
	}
	slen = strlen(s);
	if (start >= slen)
	{
		return (strdup(""));
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
	strncpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
