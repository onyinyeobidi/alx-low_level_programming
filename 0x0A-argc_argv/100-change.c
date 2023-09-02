#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num, w, result;
	int coins[] = {2, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
		if (num < 0)
		{
			printf("0\n");
			return (0);
		}
	for (w = 0; w < 5 && num >= 0; w++)
	{
		while (num >= coins[w])
		{
			result++;
			num -= coins[w];
		}
	}
	printf("%d\n", result);
	return (0);
}
