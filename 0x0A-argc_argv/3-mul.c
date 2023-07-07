#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: pointer to an array of arguments.
 * Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
