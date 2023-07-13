#include <unistd.h>

/**
 * _putchar - writes the char c to the stdout.
 * @c: the char.
 * Return: 1 on success, and -1 on failure.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
