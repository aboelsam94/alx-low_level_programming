#include <unistd.h>

/**
 * _putchar - writes the char c to the stdout
 * @c: the char to be printed
 *
 * Return: 1 on success, and -1 on error
*/

_putchar(char c)
{
	return (write(1, &c, 1));
}
