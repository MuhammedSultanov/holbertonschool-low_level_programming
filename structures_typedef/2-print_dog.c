#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dogi - check the code
 * @d: pointer
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d);
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		 printf("Age: %s\n", d->age);
		 printf("Owner: %s\n", d->owner);
}
