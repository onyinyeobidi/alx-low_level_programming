#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: Function parameter 1
 * @src: Function parameter 2
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int k = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; k < l ; k++)
	{
		dest[k] = src[k];
	}
	dest[l] = '\0';
	return (dest);
}
