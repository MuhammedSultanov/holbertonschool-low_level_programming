#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	unsigned int i = 0, ln = 0, lo = 0;

	if (owner == NULL || name == NULL)
		return (NULL);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (ln; name[ln] != '\0'; ln++)
		;
	for (lo; owner[lo] != '\0'; lo++)
		;
	ndog->name = malloc(ln * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < ln; i++)
	{
		ndog->name[i] = name[i];
	}
	ndog->age = age;
	ndog->owner = malloc(lo * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < lo; i++)
	{
		ndog->owner[i] = owner[i];
	}
	return (ndog);
}
