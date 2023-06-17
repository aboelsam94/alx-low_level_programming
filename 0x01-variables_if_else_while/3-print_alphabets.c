#include <stdio.h>

/**
 * main - Entry point
 *
 * Ddescription: prints the alphabet in lowercase and uppercase.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}

	return (0);
}
