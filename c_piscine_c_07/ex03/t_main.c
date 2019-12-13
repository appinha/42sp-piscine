/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 18:19:21 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/09 18:49:42 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "\' - \'";
	text[8] = "e tamanho";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
