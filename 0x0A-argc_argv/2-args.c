#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: int.
 * @argv: list.
 * Return: 0.
*/

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
