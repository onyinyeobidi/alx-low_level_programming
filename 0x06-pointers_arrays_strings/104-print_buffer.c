#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer
 * parameters:
 * @b: Parameter 1
 * @size: Parameter 2
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int y, n, o;

		o = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while ( o < size)
	{
		n = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (y = 0; y < 10; y++)
		{
			if (y < n)
				printf("%02x", *(b + o + y));
			else
				printf("  ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < n; y++)
		{
			int c = *(b + o + y);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
