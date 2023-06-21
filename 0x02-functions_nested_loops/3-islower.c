#include "main.h"

/**
 * _islower - func to chech if char is lowercase
 * @c: the character to check
 *
 * Description: checks if char is lower or not
 *
 * Return: 1 if character is lower and 0 othertwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
