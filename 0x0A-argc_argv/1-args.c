#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of arguments.
 * @argv: pointer to an array of arguments.
 * Return: 0 on success, and non zero on failure.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
