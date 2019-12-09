/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshbas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 14:26:07 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/01 17:10:29 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

int		ft_atoi(char nbr)
{
	int n;

	n = nbr - ('0');
	return (n);
}

int		ft_msg_error(void)
{
	ft_putstr("Error\n");
	return (0);
}
