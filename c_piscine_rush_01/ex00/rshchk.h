/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshchk.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 14:27:16 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/01 23:17:31 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RSHCHK_H
# define RSHCHK_H

void	ft_cluescheck(char *clues_str, int *clues_int);
void	ft_cluestomtx(int *clues_arr, int **clues_mtx);
int		***ft_checks(int **clues_mtx, int ***cube);

#endif
