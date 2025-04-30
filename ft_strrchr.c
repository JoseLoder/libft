/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:25:28 by jose-mim          #+#    #+#             */
/*   Updated: 2025/04/30 18:21:06 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char character;
	unsigned char *last_ptr;

	last_ptr = '\0';
	character = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == character)
		{
			last_ptr = ((char *)s);
		}
		s++;
	}
	if (character == '\0')
	{
		return ((char *)s);
	}
	return (last_ptr);
}