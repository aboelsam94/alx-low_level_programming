#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 *         On failure -1 is returned, and errno is set
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
