#include "main.h"

/**
 * is_prime_number - function that returns 1 if integer is prime number,
 * otherwise return 0.
 * @n: input integer.
 * @notn: int.
 * Return: 0 or 1.
*/
int check_prime(int n, int notn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if number < n.
 * @n: int.
 * @notn: int.
 * Return: int
*/

int check_prime(int n, int notn)
{
	if (notn >= n && n > 1)
	{
		return (1);
	}
	else if (n % notn == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, notn + 1));
	}
}
