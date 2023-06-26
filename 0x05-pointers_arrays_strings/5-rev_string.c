#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: input
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int x, y;
	char temp;

	for (x = 0; s[1] != '\0'; ++x)
		;

	for (y = 0; y < x / 2; y++)
	{
		temp = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = temp;
	}
}
