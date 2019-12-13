/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:11:09 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/08 18:44:10 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int		main(int argc, char **argv)
{
	char *filename;
	char *dict;
	char *nbr;

	filename = 0;
	dict = 0;
	nbr = 0;
	if (ft_ver_cond(argc, argv) >= 1)
	{
		filename = ft_dict_file(argc, argv);
		dict = ft_read_dict(filename);
		ft_get_nbr(argc, argv, &nbr);
		ft_write_nbr(nbr, dict);
		ft_free(filename, dict, nbr);
	}
	else
		ft_msg_error();
	write(1, "\n", 1);
	return (0);
}
