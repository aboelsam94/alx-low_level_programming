#include "main.h"

/**
 * print_square - print a suqare using the # sign
 *
 * @size: is the size of the square
 *
 * Return: 0 (Success)
*/

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (coloum = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
