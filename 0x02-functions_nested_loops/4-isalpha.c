#include "main.h"

/**
 * _isalpha - checks if character is a letter both lowercase ir uppercase
 *
 * @c: takes innnput from other function
 *
 * Description: checks alphabet characters
 *
 * Return: 1 if c and 0 else
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
