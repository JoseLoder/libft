/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:32:42 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 19:28:09 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int alphabet)
{
	if ((alphabet >= 'A' && alphabet <= 'Z') || (alphabet >= 'a'
			&& alphabet <= 'z'))
		return (1);
	else
		return (0);
}
