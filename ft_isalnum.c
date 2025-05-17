/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-mim <jose-mim@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:00:27 by jose-mim          #+#    #+#             */
/*   Updated: 2025/05/17 19:28:32 by jose-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int alphanumeric)
{
	if ((alphanumeric >= 'A' && alphanumeric <= 'Z') || (alphanumeric >= 'a'
			&& alphanumeric <= 'z') || (alphanumeric >= '0'
			&& alphanumeric <= '9'))
		return (1);
	else
		return (0);
}
