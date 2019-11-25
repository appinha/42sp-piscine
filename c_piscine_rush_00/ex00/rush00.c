/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 17:18:44 by apuchill          #+#    #+#             */
/*   Updated: 2019/11/25 14:46:51 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int p;
	int r;

	r = 1;
	while (r <= y && x > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p != 1 && p != x) && (r == 1 || r == y))
				ft_putchar('-');
			else if ((r != 1 && r != y) && (p == 1 || p == x))
				ft_putchar('|');
			else if ((p == 1) || (p == x) || (r == 1) || (r == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}
}
