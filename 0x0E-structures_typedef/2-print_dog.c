#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: the dog to print
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->name == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
