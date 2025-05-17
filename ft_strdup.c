/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:56:39 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 18:25:00 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new_string;

	len = ft_strlen(s1) + 1;
	new_string = (char *)malloc(len);
	if (new_string == NULL)
	{
		return (NULL);
	}
	ft_memcpy(new_string, s1, len);
	return (new_string);
}
