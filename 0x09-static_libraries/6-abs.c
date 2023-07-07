#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: the integer that will be computed
 *
 * Description: computes absolute value
 *i
 * Return: n
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
