#include <stdio.h>

void	ft_ft(int *nbr);

int		main (void)
{
	int *p_nbr;
	int nbr;

	nbr = 21;
	p_nbr = &nbr;

	ft_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}