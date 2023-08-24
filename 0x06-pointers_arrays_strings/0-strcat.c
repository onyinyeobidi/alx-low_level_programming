#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)

{
			int h;
			int j;

			h = 0;
			while (dest[h] != '\0')
			{
				h++;
			}
			j = 0;
			while (src[j] != '\0')
			{
				dest[h] = src[j];
				h++;
				j++;
			}
			dest[h] = '\0';
			return (dest);
}
