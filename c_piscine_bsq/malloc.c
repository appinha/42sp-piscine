/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:38:35 by robitett          #+#    #+#             */
/*   Updated: 2019/12/11 18:45:22 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		**ft_allocate_mem_2d(int n, int m)
{
	int i;
	int **arr;

	i = 0;
	arr = (int**)malloc(n * sizeof(int*));
	while (i < n)
	{
		arr[i] = (int*)malloc(m * sizeof(int));
		i++;
	}
	return (arr);
}
