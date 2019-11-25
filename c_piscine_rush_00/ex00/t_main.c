/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:03:46 by apuchill          #+#    #+#             */
/*   Updated: 2019/11/23 22:24:34 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int		main(int argc, char *argv[])
{
	char *av1 = argv[1];
	char *av2 = argv[2];
	int x = atoi(av1);
	int y = atoi(av2);

	rush(x, y);
	return (0);
}
