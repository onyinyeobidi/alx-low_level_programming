#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: Function parameter 1
 * @b: Function parameter 2
 * @n: Function parameter 3
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
