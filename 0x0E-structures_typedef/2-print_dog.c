#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: dog struct to be printed.
 *
 * Return: void.
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %d\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nill)");
	}
}
