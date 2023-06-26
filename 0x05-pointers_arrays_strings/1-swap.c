#include "main.h"

/**
 * swap_int - swaps the value of two numbers
 *
 * @a: first value
 * @b: second value
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
