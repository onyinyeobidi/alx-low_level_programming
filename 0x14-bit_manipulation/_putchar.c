#include "main.h"
#include <unistd.h>
/**
 * _putchar - it enables the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * this souce code putchar aids with the proper running of the codes
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
