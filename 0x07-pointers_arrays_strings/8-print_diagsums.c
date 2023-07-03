#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: 2d array of int
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int x, s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x];
		s2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
