#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description:  using the _putchar func to print the char a - z
 *
 * Return: none
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
