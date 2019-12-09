/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsh_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <apuchill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:48:32 by apuchill          #+#    #+#             */
/*   Updated: 2019/12/01 23:02:44 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rshbas.h"
#include "rshini.h"
#include "rshchk.h"
#include "rshmtx.h"

int		main(int argc, char *argv[])
{
	if (argc == 2 && ft_strlen(argv[1]) == 31 && argv[1][0] >= '1' &&
			argv[1][0] <= '4')
		ft_initialization(argv[1]);
	else
		ft_msg_error();
	return (0);
}
