#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - checks of any number is 0.
 * @argv: argument vector.
 * Return: void.
*/

void _is_zero(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
	{
		isn1 = 0;
		break;
	}
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}
	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _init_array - set memory to zero in a new array.
 * @ar: char array.
 * @lar: length of char array.
 * Return: pointer to array.
*/

char *_init_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _check_num - determines the length of num.
 * @argv: argument vector.
 * @n: row of the array.
 * Return: length of the number.
*/

int _check_num(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}
}

/**
 * main - entry point.
 * @argc: num of arguments.
 * @argv: arguments vector.
 * Return: 0 on Success.
*/

int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, add1, i, j, k, x;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _check_num(argv, 1), ln2 = _check_num(argv, 2), _is_zero(argv);
	lnout = ln1 + ln2;
	nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _init_array(nout, lnout);
	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, x = add1 = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (add1 > 0)

				add = (nout[k] - '0') + add1;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';

			i = ln1 - 1, j--, add1 = 0, x++, k = lnout - (1 + x);
		}
		if (j < 0)

			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _init_array(nout, lnout);
			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, x = add1 = 0;

		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + add1;
			add1 = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout), return (0);
}
