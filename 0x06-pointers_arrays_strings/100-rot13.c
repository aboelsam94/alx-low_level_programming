#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @s: input string
 *
 * Return: encoded string
*/

char *rot13(char *s)
{
	int i;
	int j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcsdefhijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == rot13[j])
			{
				s[i] = ROT13[j];
				break;
			}
		}
	}
	return (ptr);
}
