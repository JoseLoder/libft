/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:24:54 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/18 16:28:24 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "Hola mundo !";
	char **split = ft_split(str, ' ');
	int i = 0;

	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}