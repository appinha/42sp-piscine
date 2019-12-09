/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshini.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:02:15 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/01 23:35:20 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rshbas.h"
#include "rshchk.h"
#include "rshmtx.h"

void	ft_free(int *clues_arr, int **clues_mtx)
{
	int c;

	free(clues_arr);
	c = 0;
	while (c < 4)
	{
		free(clues_mtx[c]);
		c++;
	}
	free(clues_mtx);
}

void	ft_initialization(char *argv)
{
	int *clues_arr;
	int **clues_mtx;
	int ***cube;

	clues_arr = (int*)malloc(16 * sizeof(int));
	clues_mtx = create_mtx(0, 4, 4);
	cube = (int***)malloc(4 * sizeof(int**));
	ft_cluescheck(argv, clues_arr);
	ft_cluestomtx(clues_arr, clues_mtx);
	ft_poss_val_ini(cube);
	ft_checks(clues_mtx, cube);
	ft_free(clues_arr, clues_mtx);
}
