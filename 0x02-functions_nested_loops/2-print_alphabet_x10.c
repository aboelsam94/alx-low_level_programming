#include "main.h"

/**
 * print_alphabet_x10 - function that prints the aplhabet 10 times
 *
 * Description: using _putchar
 *
 * Return: none
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
