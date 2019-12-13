/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 01:51:57 by robitett          #+#    #+#             */
/*   Updated: 2019/12/11 20:58:44 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_file_size(char *map_file)
{
	int		fd;
	char	buff;
	int		size;

	fd = open(map_file, O_RDONLY);
	size = 0;
	if (fd >= 0)
	{
		while (read(fd, &buff, 1))
			size++;
		close(fd);
		return (size);
	}
	else
	{
		return (0);
	}
}

int		ft_size_1stline(char *map_file)
{
	int		fd;
	char	buff;
	int		size;

	fd = open(map_file, O_RDONLY);
	size = 0;
	if (fd >= 0)
	{
		while (read(fd, &buff, 1) && buff != '\n')
			size++;
		close(fd);
		return (size);
	}
	else
	{
		return (0);
	}
}

int		ft_size_map(char *map_file)
{
	int size;

	size = 0;
	size = ft_file_size(map_file) - ft_size_1stline(map_file);
	return (size);
}

int		ft_size_stdin(void)
{
	char	buff;
	int		size;

	size = 0;
	while (read(0, &buff, 1))
		size++;
	return (size);
}

int		ft_size_stdin_1stline(void)
{
	char	buff;
	int		size;

	size = 0;
	read(0, &buff, 1);
	while (read(0, &buff, 1) && buff != '\n')
	{
		size++;
	}
	return (size);
}
