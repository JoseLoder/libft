/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:37:58 by jose-mim          #+#    #+#             */
/*   Updated: 2025/04/26 16:52:37 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_d;
	const unsigned char *ptr_s;
	size_t i;

	if (!dest || !src)
		return (NULL);

	ptr_d = (unsigned char *)dest;
	ptr_s = (unsigned char *)src;

	if (ptr_d > ptr_s && ptr_d < ptr_s + n)
	{
		i = n;

		while (i > 0)
		{
			i--;
			ptr_d[i] = ptr_s[i];
		}
	}
	else
	{
		i = 0;

		while (i < n)
		{
			ptr_d[i] = ptr_s[i];
			i++;
		}
	}

	return (dest);
}