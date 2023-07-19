#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: the name to be printed.
 * @f: pointer to func that prints the name.
 *
 * Return: void.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		
		f(name);
}
