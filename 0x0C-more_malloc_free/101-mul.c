#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if char is digit.
 * @c: the char to be checked.
 * Return: 1 if digit, and 0 if not.
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string.
 * @s: thr string.
 * Return: length of string in an int.
*/

int _strlen(char *s)
{
	int x = 0;

	while (*s++)
	{
		x++;
	}
	return (x);
}

/**
 * big_num_multiply - multiply two nums.
 * @s1: first num.
 * @s2: second num.
 * Return: num string.
*/

char *big_num_multiply(char *s1, char *s2)
{
	char *y;
	int x1, x2, a, b, c, z;

	x1 = _strlen(s1);
	x2 = _strlen(s2);

	y = malloc(a = z = x1 + x2);
	if (!y)
		printf("Error\n"), exit(98);
	while (a--)
		y[a] = 0;

	for (x1--; x1 >= 0; x1--)
	{
		if (!_isdigit(s1[x1]))
		{
			free(y);
			printf("Error\n"), exit(98);
		}
		a = s1[x1] - '0';
		c = 0;

		for (x2 = _strlen(s2) - 1; x2 >= 0; x2--)
		{
			if (!_isdigit(s2[x2]))
			{
				free(y);
				printf("Error\n"), exit(98);
			}
			b = s2[x2] - '0';

			c += y[x1 + x2 + 1] + (a * b);
			y[x1 + x2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			y[x1 + x2 + 1] += c;
	}
	return (y);
}

/**
 * main - print the result of the multiplication.
 * @argc: int.
 * @argv: list.
 * Return: 0.
*/

int main(int argc, char const *argv[])
{
	char *z;
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n"), exit(98);
	}

	c = _strlen(argv[1]) + _strlen(argv[2]);
	z = big_num_multiply(argv[1], argv[2]);
	b = 0;
	a = 0;

	while (b < c)
	{
		if (z[b])
			a = 1;
		if (a)
			_putchar(z[c] + '0');
		b++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(z);
	return (0);
}
