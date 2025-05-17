/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:16:56 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 19:32:21 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	s1_len;
	size_t	s2_len;
	size_t	result;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	buffer = (char *)malloc(s1_len + s2_len + 1);
	if (!buffer)
	{
		return (NULL);
	}
	s1_len = ft_strlcpy(buffer, s1, s1_len + 1);
	result = ft_strlcat(buffer, s2, s1_len + s2_len + 1);
	return (buffer);
}
