#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: widht of the array.
 * @height: length of the array.
 * Return: pointer to 2d array.
*/

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}
