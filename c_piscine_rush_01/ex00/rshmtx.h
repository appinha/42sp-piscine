/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshmtx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:39:21 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/01 22:32:16 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RSHMTX_H
# define RSHMTX_H

int		**create_mtx(int value, int row, int col);
int		***ft_poss_val_ini(int ***possible_val);
void	ft_zeros_cell(int **mtx, int r, int c);
void	ft_zeros_3arr(int ***cube, int layer, int row, int col);

#endif
