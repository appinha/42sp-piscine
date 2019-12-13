#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int	main(void)
{
	char *test;
	char *dup;

	test = "Testando a função strdup!";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}
