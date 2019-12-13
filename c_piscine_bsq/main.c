/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:17:01 by robitett          #+#    #+#             */
/*   Updated: 2019/12/11 20:27:48 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1 && read_file(argc, argv[0]) == 0)
	{
		ft_msg_error();
		return (0);
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			if (read_file(argc, argv[i]) == 0)
			{
				ft_msg_error();
				break ;
			}
			i++;
		}
	}
	return (0);
}
