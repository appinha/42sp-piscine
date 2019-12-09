/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$

#include <unistd.h>

int		main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}

--------------------------------------------------------------------------------
*/

#include <unistd.h>

int		main(void)
{
	char a;
	char b;

	a = 'a';
	b = 'B';
	while (b <= 'Z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a += 2;
		b += 2;
	}
	write(1, "\n", 1);
	return (0);
}