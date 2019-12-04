#include <stdlib.h>

void	ft_putnbr(int nb);

int		main(int argc, char *argv[])
{
	char *av = argv[1];
	int  nbr = atoi(av);

	ft_putnbr(nbr);
	return(0);
}
