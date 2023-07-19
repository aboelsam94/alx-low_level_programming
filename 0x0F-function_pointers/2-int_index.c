#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: int array.
 * @size: array size.
 * @cmp: compare func.
 *
 * Return: int index.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
