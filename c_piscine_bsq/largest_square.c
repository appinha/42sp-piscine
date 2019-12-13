/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   largest_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 02:57:09 by robitett          #+#    #+#             */
/*   Updated: 2019/12/11 18:45:32 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		largest_square(int nb_x, int nb_y, int *m[])
{
	int x;
	int y;
	int res;

	res = 0;
	x = 0;
	while (x < nb_x)
	{
		y = 0;
		while (y < nb_y)
		{
			if (x == 0 || y == 0)
				m[x][y] = m[x][y];
			else if (m[x][y] > 0)
				m[x][y] = 1 + min_v(m[x][y - 1], m[x - 1][y - 1], m[x - 1][y]);
			if (m[x][y] > res)
				res = m[x][y];
			y++;
		}
		x++;
	}
	return (res);
}

int		min_v(char a, char b, char c)
{
	if (a < b)
	{
		if (a < c)
			return (a);
		else
			return (c);
	}
	else if (b < c)
		return (b);
	else
		return (c);
}

void	search_square(int res, int *nb_x, int *nb_y, int **matrix)
{
	int x;
	int y;

	x = 0;
	while (x < *nb_x)
	{
		y = 0;
		while (y < *nb_y)
		{
			if (matrix[x][y] == res)
			{
				*nb_x = x;
				*nb_y = y;
				return ;
			}
			y++;
		}
		x++;
	}
}

void	inverse_array(int res, int row, int col, int **matrix)
{
	int i;

	i = 0;
	while (i < row)
	{
		inverse_array_aux(res, col, matrix, i);
		write(1, "\n", 1);
		i++;
	}
}

void	inverse_array_aux(int res, int col, int **matrix, int i)
{
	int j;
	int k;

	j = 0;
	while (j < col)
	{
		if (i > map[0].pos_x - res && i < map[0].pos_x + 1 &&
				j == map[0].pos_y - res + 1)
		{
			k = 0;
			while (k < res)
			{
				write(1, &map[0].full, 1);
				j++;
				k++;
			}
		}
		if (matrix[i][j] != 0)
			write(1, &map[0].empty, 1);
		else
			write(1, &map[0].obstacle, 1);
		j++;
	}
}
