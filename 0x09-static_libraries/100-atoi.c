#include "main.h"
/**
 * _atoi - convert a string into an integer.
 * @s: the string to use.
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, h = 0;
	unsigned int res = 0;

	while (!(s[h] <= '9' && s[h] >= '0') && s[h] != '\0')
	{
		if (s[h] == '-')
			sign *= -1;
		h++;
	}
	while (s[h] <= '9' && (s[h] >= '0' && s[h] != '\0'))
	{
		res = (res * 10) + (s[h] - '0');
		h++;
	}
	res *= sign;
	return (res);
}
