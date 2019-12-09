/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshmtx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:43:38 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/01 23:08:55 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**create_mtx(int value, int row, int col)
{
	int i;
	int j;
	int **mtx;

	mtx = (int**)malloc(row * sizeof(int*));
	i = 0;
	while (i < row)
	{
		mtx[i] = (int*)malloc(col * sizeof(int));
		j = 0;
		while (j < col)
		{
			mtx[i][j] = value;
			j++;
		}
		i++;
	}
	return (mtx);
}

int		***ft_poss_val_ini(int ***possible_val)
{
	int c;

	c = 0;
	while (c < 4)
	{
		possible_val[c] = create_mtx(c + 1, 4, 4);
		c++;
	}
	return (possible_val);
}

void	ft_zeros_cell(int **mtx, int r, int c)
{
	mtx[r][c] = 0;
}

void	ft_zeros_3arr(int ***cube, int layer, int row, int col)
{
	int l;
	int r;
	int c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			if ((row == r && col != c) || (row != r && col == c))
			{
				ft_zeros_cell(cube[layer], r, c);
			}
			c++;
		}
		r++;
	}
	l = 0;
	while (l < 4)
	{
		if (layer != l)
			ft_zeros_cell(cube[l], row, col);
		l++;
	}
}
