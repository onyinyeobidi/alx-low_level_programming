#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: Function parameter 1
 *@src: Function parameter 2
 *@n: Function parameter 3
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int i = n;

	for (; h < i; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}
