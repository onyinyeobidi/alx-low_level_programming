#include <stdio.h>
#include "main.h"
/**
 * main - check code
 * n: interger paremeter which a value of same datatype is assigned
 * Return: always returns 0 ( Success)
 **/
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
