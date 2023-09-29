#include "main.h"
/**
 * print_binary - Printing the binary equivalent of a decimal number
 * @n: number to print in binary
 * unsigned long: only positive large amount integers are considered
 * r count and current: are local variables introduced
 */
void print_binary(unsigned long int n)
{
	int r;
	int count = 0;
	unsigned long int current;

	for (r = 63; r >= 0; r--)
	{
		current = n >> r;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
