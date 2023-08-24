#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int h;
	int w;

	for (h = 0; h < n--; h++)

	{
		w = a[h];
		a[h] = a[n];
		a[n] = w;
	}
}
