#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments.
 * @argv: pointer to array of arguments.
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (money >= cents[x])
			{
				leastcents += money / cents[x];
				money = money % cents[x];
				if (money % cents[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
