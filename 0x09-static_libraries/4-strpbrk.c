#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to string.
 * @accept: pointer to the byte.
 * Return: pointer to s
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (0);
}
