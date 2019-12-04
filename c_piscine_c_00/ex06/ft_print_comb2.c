/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:46:23 by apuchill          #+#    #+#             */
/*   Updated: 2019/11/24 15:30:20 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char ch_u;
	char ch_d;

	if (num <= 9)
	{
		ch_u = num + 48;
		ft_putchar2('0', ch_u);
	}
	else if (num <= max)
	{
		ch_u = (num % 10) + 48;
		ch_d = (num / 10) + 48;
		ft_putchar2(ch_d, ch_u);
	}
}

void	ft_catint(int fir, int sec)
{
	ft_putint(fir, 98);
	write(1, " ", 1);
	ft_putint(sec, 99);
	if (fir != 98 || sec != 99)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int f;
	int s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_catint(f, s);
			s++;
		}
		f++;
	}
}
