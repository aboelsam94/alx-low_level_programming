#include <unistd.h>

/**
 * _putchar - write the char c to the stdout
 * @c: the char to be printed
 *
 * Returnn: 1 on succeess and -1 on failure
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
