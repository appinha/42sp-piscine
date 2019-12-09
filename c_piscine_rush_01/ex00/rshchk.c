/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshchk.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 14:26:32 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/01 23:16:31 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rshbas.h"
#include "rshmtx.h"

void	ft_cluescheck(char *clues_str, int *clues_int)
{
	int ci;
	int cs;

	ci = 1;
	cs = 1;
	clues_int[0] = ft_atoi(clues_str[0]);
	while (clues_str[cs] != '\0')
	{
		if (clues_str[cs] == ' ' &&
				clues_str[cs + 1] >= '1' && clues_str[cs + 1] <= '4')
		{
			clues_int[ci] = ft_atoi(clues_str[cs + 1]);
			cs += 2;
			ci++;
		}
		else
		{
			ft_msg_error();
			return ;
		}
	}
}

void	ft_cluestomtx(int *clues_arr, int **clues_mtx)
{
	int i;
	int c;
	int r;

	i = 0;
	r = 0;
	while (i < 16)
	{
		c = 0;
		while (c < 4)
		{
			clues_mtx[r][c] = clues_arr[i];
			i++;
			c++;
		}
		r++;
	}
}

void	ft_check_1(int ***cube, int r, int c)
{
	if (r == 0)
		ft_zeros_3arr(cube, (4 - 1), (1 - 1), c);
	if (r == 1)
		ft_zeros_3arr(cube, (4 - 1), (4 - 1), c);
	if (r == 2)
		ft_zeros_3arr(cube, (4 - 1), c, (1 - 1));
	if (r == 3)
		ft_zeros_3arr(cube, (4 - 1), c, (4 - 1));
}

void	ft_check_4(int ***cube, int r, int c)
{
	if (r == 0)
	{
		ft_zeros_3arr(cube, (1 - 1), (1 - 1), c);
		ft_zeros_3arr(cube, (2 - 1), (2 - 1), c);
		ft_zeros_3arr(cube, (3 - 1), (3 - 1), c);
		ft_zeros_3arr(cube, (4 - 1), (4 - 1), c);
	}
	if (r == 1)
	{
		ft_zeros_3arr(cube, (1 - 1), (4 - 1), c);
		ft_zeros_3arr(cube, (2 - 1), (3 - 1), c);
		ft_zeros_3arr(cube, (3 - 1), (2 - 1), c);
		ft_zeros_3arr(cube, (4 - 1), (1 - 1), c);
	}
	if (r == 2)
	{
		ft_zeros_3arr(cube, (1 - 1), c, (1 - 1));
		ft_zeros_3arr(cube, (2 - 1), c, (2 - 1));
		ft_zeros_3arr(cube, (3 - 1), c, (3 - 1));
		ft_zeros_3arr(cube, (4 - 1), c, (4 - 1));
	}
	if (r == 3)
	{
		ft_zeros_3arr(cube, (1 - 1), c, (4 - 1));
		ft_zeros_3arr(cube, (2 - 1), c, (3 - 1));
		ft_zeros_3arr(cube, (3 - 1), c, (2 - 1));
		ft_zeros_3arr(cube, (4 - 1), c, (1 - 1));
	}
}

int		***ft_checks(int **clues_mtx, int ***cube)
{
	int r;
	int c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			if (clues_mtx[r][c] == 1)
				ft_check_1(cube, r, c);
			
			if (clues_mtx[r][c] == 4)
				ft_check_4(cube, r, c);
			c++;
		}
		r++;
	}
	return (cube);
}
