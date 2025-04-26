/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:26:39 by jose-mim          #+#    #+#             */
/*   Updated: 2025/04/26 13:48:37 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	/*
		unsigned char *ptr;
		size_t i;

		ptr = (unsigned char *)s;
		i = 0;

		while (i < n)
		{
			ptr[i] = '\0';
			i++;
		}
			*/
}