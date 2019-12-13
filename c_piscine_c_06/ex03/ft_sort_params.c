/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 16:33:03 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/09 18:28:55 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int		main(int argc, const char **argv)
{
	int qty;
	int c;
	int d;
	int arg[argc];

	qty = 1;
	c = 1;
	while (qty < argc)
	{
		arg[qty] = qty;
		qty++;
	}
	while (c < argc)
	{
		d = c;
		while (d < argc)
		{
			if (ft_strcmp(argv[arg[c]], argv[arg[d]]) > 0)
				ft_swap(&arg[c], &arg[d]);
			d++;
		}
		ft_putstr(argv[arg[c++]]);
	}
	return (0);
}
