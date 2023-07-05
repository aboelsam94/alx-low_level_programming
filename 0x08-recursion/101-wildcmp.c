#include "main.h"

/**
 * skip_star - skips the *.
 * @s2: second string.
 * Return: the pointer.
*/

char *skip_star(char *s2)
{
	if (*s2 == '*')
	{
		return (skip_star(s2 + 1));
	}
	else
	{
		return (s2);
	}
}

/**
 * inception - makes magic happens.
 * @s1: first string.
 * @s2: second string.
 * Return: 1 0r 0.
*/

int inception(char *s1, char *s2)
{
	int x = 0;

	if (*s1 == 0)
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		x += wildcmp(s1 + 1, s2 + 1);
	}
	x += inception(s1 + 1, s2);
	return (x);
}

/**
 * wildcmp -  a function that compares two strings and
 * returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @s1: first string.
 * @s2: second string.
 * Return: 1 or 0.
*/

int wildcmp(char *s1, char *s2)
{
	int y = 0;

	if (!*s1 && *s2 == '*' && !*skip_star(s2))
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		if (!*s1)
		{
			return (1);
			return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
		}
	}
	if (!*s1 || !s2)
	{
		return (0);
	}
	if (*s2 == '*')
	{
		s2 = skip_star(s2);
		if (!*s2)
		{
			return (1);
		}
		if (*s1 == *s2)
		{
			y += wildcmp(s1 + 1, s2 + 1);
		}
		y += inception(s1, s2);
		return (!!y);
	}
	return (0);
}
