#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: input
 *
 * Return; nothing
*/

void _puts(char *str)
{
	while (*syr != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
