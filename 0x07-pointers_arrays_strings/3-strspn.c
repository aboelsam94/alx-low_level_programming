#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to string
 * @accept: bytes
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[y]; y++)
		{
			if (accept[x] == '\0')
				return (x);
		}
	}
	return (x);
}
