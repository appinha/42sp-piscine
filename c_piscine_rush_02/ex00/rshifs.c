/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshifs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 21:52:23 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/08 22:58:54 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_if_uni(char dig, char *dict, int d)
{
	if (dict[d] == dig && !(dict[d + 1] >= '0' && dict[d + 1] <= '9') &&
			!(dict[d - 1] >= '0' && dict[d - 1] <= '9'))
		return (1);
	else
		return (0);
}

int		ft_if_dez(char dig, char *dict, int d)
{
	if (dict[d] == dig && (dict[d + 1] == '0') &&
		!(dict[d + 2] >= '0' && dict[d + 2] <= '9') &&
		!(dict[d - 1] >= '0' && dict[d - 1] <= '9'))
		return (1);
	else
		return (0);
}

int		ft_if_teens(char dig, char *dict, int d)
{
	if (dict[d] == dig && dict[d] == '1' &&
		(dict[d + 1] >= '0' && dict[d + 1] <= '9') &&
		!(dict[d + 2] >= '0' && dict[d + 2] <= '9') &&
		!(dict[d - 1] >= '0' && dict[d - 1] <= '9'))
		return (1);
	else
		return (0);
}
