#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, e;

	sum1 = 0;
	sum2 = 0;

	for (e = 0; e < size; e++)
	{
		sum1 = sum1 + a[e * size + e];
	}
	for (e = size - 1; e >= 0; e--)
	{
		sum2 += a[e * size + (size - e - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
