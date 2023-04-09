#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: int
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/* if there's money as argument */
	if (argc == 2)
	{
		int i, min_coins = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				min_coins += money / cents[i];
				/* what left from the money */
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", min_coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
