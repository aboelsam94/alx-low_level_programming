#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: 2d array of int
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int x, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + y];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
