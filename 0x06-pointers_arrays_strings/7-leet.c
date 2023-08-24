#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)

{
	int i, g;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (g = 0; g < 10; g++)
		{
			if (n[i] == s1[g])
			{
				n[i] = s2[g];
			}
		}
	}
	return (n);
}
