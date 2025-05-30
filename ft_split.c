/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:09:11 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/18 20:50:14 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	int sentinel;
	char **split;
	size_t total_court;
	size_t court;

	i = 0;
	sentinel = 0;
	j = 0;
	total_court = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && !sentinel)
		{
			sentinel = 1;
			total_court++;
		}
		else if (s[i] == c)
		{
			sentinel = 0;
		}
		i++;
	}
	i = 0;
	split = (char **)malloc(sizeof(char *) * (total_court + 1));
	if (!split)
		return (NULL);
	split[total_court + 1] = NULL;
	if (total_court == 0)
	{
		split[0] = s;
		return (split);
	}
	court = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			split[court] = ft_substr(s, s[i - j], j);
			court++;
			total_court--;
			j = 0;
		}
		i++;
		j++;
	}
	split[court + 1] = ft_substr(s, s[i - j], j);
	return (split);
}