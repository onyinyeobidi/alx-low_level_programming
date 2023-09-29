#include "main.h"
/**
 * get_bit - this returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 * unsigned: only positive integers are considered
 * Bit: The bit values
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int Bit;

	if (index > 63)
		return (-1);
	Bit = (n >> index) & 1;
	return (Bit);
}
