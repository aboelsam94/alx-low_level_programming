#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a func that gets the length of string.
 * @str: the string.
 *
 * Return: length of str.
*/

int _strlen(const char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	return (l);
}

/**
 * _strcopy - a func that returns @dest with a copy of string.
 * @src: the string to copy.
 * @dest: copy of the string.
*/

char *_strcopy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: struct.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcopy(dog->name, name);
	_strcopy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
