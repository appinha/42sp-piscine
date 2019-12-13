/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 11:37:38 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/11 20:41:36 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_verif_map(void)
{
	if (check_min() == 0 || check_breakline() == 0 || check_chars() == 0)
	{
		return (0);
	}
	else
		return (1);
}

int		check_min(void)
{
	if (map[0].col < 1 || map[0].row < 1)
		return (0);
	return (1);
}

int		check_breakline(void)
{
	int i;
	int qty;

	i = 0;
	qty = 0;
	while (map[0].map[i] != '\0')
	{
		if (map[0].map[i] == '\n')
			qty++;
		i++;
	}
	if (qty == map[0].row)
		return (1);
	else
		return (0);
}

int		check_chars(void)
{
	int i;

	i = 0;
	while (map[0].map[i] != '\0')
	{
		if (map[0].map[i] == map[0].full)
			return (0);
		if (!(map[0].map[i] == map[0].empty || map[0].map[i] == map[0].obstacle
			|| map[0].map[i] == '\n'))
			return (0);
		i++;
	}
	return (1);
}
