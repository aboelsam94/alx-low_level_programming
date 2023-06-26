#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 *
 * @str: input
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; ++x)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
