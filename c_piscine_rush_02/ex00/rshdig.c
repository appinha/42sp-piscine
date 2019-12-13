/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshdig.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:21:14 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/08 23:04:23 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_write_uni(char dig, char *dict)
{
	int		d;
	int		i;
	char	write_dig[20];

	d = 0;
	i = 0;
	while (dict[d] != '\0')
	{
		if (ft_if_uni(dig, dict, d) == 1)
		{
			while (dict[d] != '\n')
			{
				if (dict[d] != ' ' && dict[d] != ':' &&
					!(dict[d] >= '0' && dict[d] <= '9'))
				{
					write_dig[i] = dict[d];
					i++;
				}
				d++;
			}
			write_dig[i] = '\0';
		}
		d++;
	}
	ft_putstr(write_dig);
}

void	ft_write_dez(char dig, char *dict)
{
	int		d;
	int		i;
	char	write_dig[20];

	d = 0;
	i = 0;
	while (dict[d] != '\0')
	{
		if (ft_if_dez(dig, dict, d) == 1)
		{
			while (dict[d] != '\n')
			{
				if (dict[d] != ' ' && dict[d] != ':' &&
					!(dict[d] >= '0' && dict[d] <= '9'))
				{
					write_dig[i] = dict[d];
					i++;
				}
				d++;
			}
			write_dig[i] = '\0';
		}
		d++;
	}
	ft_putstr(write_dig);
}

void	ft_write_teens(char dig, char *dict)
{
	int		d;
	int		i;
	char	write_dig[200];

	d = 0;
	i = 0;
	while (dict[d] != '\0')
	{
		if (ft_if_teens(dig, dict, d) == 1)
		{
			while (dict[d] != '\n')
			{
				if (dict[d] != ' ' && dict[d] != ':' &&
					!(dict[d] >= '0' && dict[d] <= '9'))
				{
					write_dig[i] = dict[d];
					i++;
				}
				d++;
			}
			write_dig[i] = '\0';
		}
		d++;
	}
	ft_putstr(write_dig);
}
