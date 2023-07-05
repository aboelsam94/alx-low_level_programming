#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string.
 * Return: string in reverse.
*/

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s > '\0')
	{
		x += _strlen_recursion(s + 1) + 1;
	}
	return (x);
}
