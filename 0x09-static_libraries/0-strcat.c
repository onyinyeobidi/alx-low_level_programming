#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int g;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	dest[i] = '\0';
	return (dest);
}
