#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int h;
	int j;

	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	h = 0;
	while (j < n && src[j] != '\0')
	{
		dest[h] = src[j];
		h++;
		j++;
	}
	dest[h] = '\0';
	return (dest);
}
