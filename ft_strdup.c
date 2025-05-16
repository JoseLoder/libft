/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:56:39 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/16 21:02:05 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new_string;

	if (s1 == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s1) + 1;
	new_string = (char *)malloc(len);
	if (new_string == NULL)
	{
		return (NULL);
	}
	ft_memcpy(new_string, s1, len);
	return (new_string);
}
