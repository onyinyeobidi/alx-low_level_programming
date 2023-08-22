#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: Function parameter
 * Return: Print
 */
void puts2(char *str)
{
		int t;

		t = 0;
		for (; str[t] != '\0'; t++)
		{
			if ((t % 2) == 0)
				_putchar(str[t]);
			else
				continue;
		}
		_putchar('\n');
}
