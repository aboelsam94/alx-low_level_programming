#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	temp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 * prime factor of a number
 *
 * @num: operand
*/

void largest_prime_factor(long int num)
{
	int primNum, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (primNum = 3; primNum <= _sqrt(num); primNum += 2)
	{
		while (num % primNum == 0)
		{
			num = num / primNum;
			largest = primNum;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: 0 (Success)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
