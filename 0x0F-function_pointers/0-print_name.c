#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: the string name.
 * @f: the printing pointer func.
 *
 * Return: ivoid.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
