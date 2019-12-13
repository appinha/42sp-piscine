/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshdict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 00:38:46 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/08 22:53:04 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_dict_file(int argc, char **argv)
{
	char	*filename;
	char	*filestd;
	int		c;

	filestd = "numbers.dict";
	c = 0;
	filename = (char*)malloc(100 * sizeof(char));
	if (argc == 2)
	{
		while (filestd[c] != '\0')
		{
			filename[c] = filestd[c];
			c++;
		}
		filename[c] = '\0';
	}
	else
	{
		while (argv[1][c] != '\0')
		{
			filename[c] = argv[1][c];
			c++;
		}
	}
	return (filename);
}

char	*ft_read_dict(char *filename)
{
	int		dict_open;
	int		dict_read;
	char	*dict_aux;
	char	*dict;
	int		i;

	i = 0;
	dict_aux = (char*)malloc(2000 * sizeof(char));
	dict_open = open(filename, O_RDONLY);
	if (dict_open < 0)
	{
		ft_msg_error();
		return (0);
	}
	dict_read = read(dict_open, dict_aux, 2000);
	dict = (char*)malloc((dict_read + 1) * sizeof(char));
	while (i < dict_read)
	{
		dict[i] = dict_aux[i];
		i++;
	}
	dict[i] = '\0';
	free(dict_aux);
	close(dict_open);
	return (dict);
}

void	ft_write_nbr(char *nbr, char *dict)
{
	int c;
	int len;
	int div;

	c = 0;
	len = ft_strlen(nbr);
	ft_write_trio(nbr, len, dict);
	while (nbr[c] != '\0')
	{
		div = len / 3;
		c++;
	}
}

void	ft_write_trio(char *nbr, int len, char *dict)
{
	int		c;
	int		mod;

	c = 0;
	mod = 0;
	while (nbr[c] != '\0')
	{
		mod = len % 3;
		if (mod == 2 && nbr[c] == '1')
		{
			printf("*ft_write_trio: 1º if\n");
			ft_write_teens(nbr[c], dict);			
			break ;
		}
		else if (mod == 2 && nbr[c] != '1' && nbr[c + 1] != '0')
		{
			ft_write_dez(nbr[c], dict);
			write(1, " ", 1);
		}
		if (mod == 1)
			ft_write_uni(nbr[c], dict);
		c++;
		len--;
	}
}
