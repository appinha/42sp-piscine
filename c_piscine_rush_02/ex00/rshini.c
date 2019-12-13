/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshini.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:25:29 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/08 15:03:41 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_ver_cond(int argc, char **argv)
{
	if (argc == 2 && ft_ver_nbr(argv[1]) == 1)
		return (1);
	else if (argc == 3 && ft_ver_dict(argv[1]) == 1 && ft_ver_nbr(argv[2]) == 1)
		return (2);
	else
		return (0);
}

int		ft_ver_nbr(char *argv)
{
	int c;

	c = 0;
	while (argv[c] != '\0')
	{
		if (argv[c] >= '0' && argv[c] <= '9')
			c++;
		else
			return (0);
	}
	return (1);
}

int		ft_ver_dict(char *argv)
{
	int c;

	c = 0;
	while (argv[c] != '\0')
	{
		if ((argv[c] >= '0' && argv[c] <= '9') ||
			(argv[c] >= 'A' && argv[c] <= 'Z') || (argv[c] == '.') ||
			(argv[c] >= 'a' && argv[c] <= 'z') || (argv[c] == '_'))
			c++;
		else
			return (0);
	}
	return (1);
}

void	ft_get_nbr(int argc, char **argv, char **nbr)
{
	int		i;
	int		j;

	j = 0;
	*nbr = (char*)malloc(40 * sizeof(char));
	if (ft_ver_cond(argc, argv) == 1)
		i = 1;
	else
		i = 2;
	while (argv[i][j] != '\0')
	{
		nbr[0][j] = argv[i][j];
		j++;
	}
	nbr[0][j] = '\0';
}

void	ft_free(char *filename, char *dict, char *nbr)
{
	free(filename);
	free(dict);
	free(nbr);
}
