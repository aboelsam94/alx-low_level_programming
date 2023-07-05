#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: int.
 * @squ: square root
 * Return: square root of n.
*/
int square(int n, int squ);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - a func that finds the square root.
 * @n: int.
 * @squ: square root.
 * Return: int.
*/

int square(int n, int squ)
{
	if (squ * squ == n)
	{
		return (squ);
	}
	else if (squ * squ < n)
	{
		return (square(n, squ + 1));
	}
	else
	{
		return (-1);
	}
}
