/*
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>

#include <unistd.h>

int		main(void)
{
	write(1, "9876543210\n", 11);
	return (0);
}

--------------------------------------------------------------------------------
*/

#include <unistd.h>

int		main(void)
{
	char c;

	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}