#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the name to be printed.
 * @f: pointer to func that prints the name.
 *
 * Return: void.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}

/**
 * print_a_name - a func that prints a name.
 * @name: name to be printed.
 *
 * Return: void.
*/

void print_a_name(char *name)
{
	printf("%s\n", name);
}

/**
 * main - entet of the program.
 *
 * Return: 0.
*/

int main(void)
{
	print_name("Mo", print_a_name);

	return (0);
}
