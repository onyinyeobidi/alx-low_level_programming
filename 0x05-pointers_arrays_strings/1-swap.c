#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:First argument to be swapped.
 * @b:second argument to be swapped.
 * Return: it returns void.
 */


void swap_int(int *a, int *b)

{
		int o;

		o = *a;
		*a = *b;
		*b = o;
}
