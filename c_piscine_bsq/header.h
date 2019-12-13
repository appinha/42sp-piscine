/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:59:57 by robitett          #+#    #+#             */
/*   Updated: 2019/12/11 20:48:44 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

struct	s_first_line
{
	char	nb_line[10];
	char	empty;
	char	obstacle;
	char	full;
	int		row;
	int		col;
	char	*map;
	int		pos_x;
	int		pos_y;
};

struct s_first_line map[1];

/*
** basics
*/
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_msg_error(void);
/*
** read_file
*/
int		read_file(int argc, char *map_file);
int		get_map(char *map_file);
void	get_map_stdin(void);
void	get_info_map(char *buff);
int		**map_to_int(void);
/*
** largest_square
*/
int		largest_square(int nb_x, int nb_y, int **m);
int		min_v(char a, char b, char c);
void	search_square(int res, int *nb_x, int *nb_y, int **matrix);
void	inverse_array(int res, int row, int col, int **matrix);
void	inverse_array_aux(int res, int col, int **matrix, int i);
/*
**  malloc
*/
int		**ft_allocate_mem_2d(int n, int m);
/*
**  verifs
*/
int		ft_verif_map(void);
int		check_min(void);
int		check_breakline(void);
int		check_chars(void);
/*
**  size_map
*/
int		ft_file_size(char *map_file);
int		ft_size_1stline(char *map_file);
int		ft_size_map(char *map_file);
int		ft_size_stdin(void);
int		ft_size_stdin_1stline(void);
/*
**  ???
*/
int		check_row_size(void);
int		check_row_size(void);
int		check_row_qty(void);
int		**copy_matrix(int nb_x, int nb_y, int matrix[][nb_y]);

#endif
