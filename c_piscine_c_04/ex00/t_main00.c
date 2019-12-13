#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Amanda";
	char *p_str;

	p_str = str;

	int count = ft_strlen(p_str);
	
	printf("%d\n", count);
}