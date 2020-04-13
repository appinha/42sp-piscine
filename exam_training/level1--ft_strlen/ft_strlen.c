/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

// DO NOT SUBMIT ANYTHING BELOW

#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Amanda";

	int count = ft_strlen(str);
	
	printf("%d\n", count);
}