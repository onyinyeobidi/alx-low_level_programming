#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int longj = 0;

	while (*s != '\0')
	{
		longj++;
		s++;
	}
	return (longj);
}
