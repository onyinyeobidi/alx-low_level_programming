#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: Function parameter 1
 * @src: Function parameter 2
 * @n: Function parameter 3
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
