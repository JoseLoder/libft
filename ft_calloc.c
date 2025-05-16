/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:54:19 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/16 20:54:21 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*calloc(size_t count, size_t size)
{
	void *ptr;
	size_t total_size;
	unsigned char *p;
	size_t i;

	i = 0;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (__builtin_mul_overflow(count, size, &total_size))
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	p = (unsigned char *)ptr;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}