/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 12:15:28 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 19:37:34 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char c, const char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	s1_len;
	char	*buffer;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	if (start == s1_len)
		return ((char *)malloc(1));
	end = s1_len;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	buffer = (char *)malloc(end - start + 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s1 + start, end - start + 1);
	return (buffer);
}

/**
str[
	' '(0),
	' '(1),
	' '(2),
	'H'(3),
	'O'(4),
	'L'(5),
	'A'(6),
	' '(7),
	' '(8),
	' '(9),
	' '(10)
]
start in str[3]
end in str[6]
6 - 3 => str[3] => 4 characters
size = (end_len - start_len + 1(for null character)
declare malloc with size
copy str[3(start)] until size
*/