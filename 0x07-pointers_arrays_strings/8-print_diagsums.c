#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: 2d array of int
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int sum1, sum2, x;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}
	for (x = 0; x < size; x++)
	{
		sum2 += a[(size - 1 - x) * size + x];
	}
	printf("%d, %d\n", sum1, sum2);
}
