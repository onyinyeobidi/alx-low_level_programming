#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expecrt the best. Prepare for the worst";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
