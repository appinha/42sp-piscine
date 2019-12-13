/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 11:54:04 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/12 16:20:35 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int index);

int		main(void)
{
	printf("-10 = %d (0)\n", ft_sqrt(-10));
	printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf(" 0 = %d (0)\n", ft_sqrt(0));
	printf(" 1 = %d (1)\n", ft_sqrt(1));
	printf(" 2 = %d (0)\n", ft_sqrt(2));
	printf(" 3 = %d (0)\n", ft_sqrt(3));
	printf(" 4 = %d (2)\n", ft_sqrt(4));
	printf(" 9 = %d (3)\n", ft_sqrt(9));
	printf(" 16 = %d (4)\n", ft_sqrt(16));
	printf(" 25 = %d (5)\n", ft_sqrt(16));
	
}
