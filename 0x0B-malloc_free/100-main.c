#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Return - Always 0.
 * main - check the code for ALX School students.
 */

int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
