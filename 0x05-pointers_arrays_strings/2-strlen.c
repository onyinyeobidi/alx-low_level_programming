#include "main.h"

/**
* _strlen-Finds the length of a string.
* @s: This is a string pointer to the string whose length is to be found.
* Return: It returns the length of the string.
*/

int _strlen(char *s)

{
			int longi = 0;

			while (*s != '\0')
{
			longi++;
			s++;
}
return (longi);
}
