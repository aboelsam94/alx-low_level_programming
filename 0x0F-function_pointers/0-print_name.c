#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the string name.
 * @f: the printing pointer func.
 *
 * Return: Void.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
