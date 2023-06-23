#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: number of time the _ character is printed
*/

void print_line(int n)
{
	int lnChar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChar = 1; lnChar <= n; lnChar++)
			_putchar('_');
		_putchar('\n');
	}
}
