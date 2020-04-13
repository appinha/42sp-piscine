/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>

int		main(void)
{
	char z;
	char y;

	z = 'z';
	y = 'Y';
	while (y >= 'A')
	{
		write(1, &z, 1);
		write(1, &y, 1);
		z -= 2;
		y -= 2;
	}
	write(1, "\n", 1);
	return (0);
}