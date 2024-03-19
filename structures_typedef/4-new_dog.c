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
	for (ln = 0; name[ln]; ln++)
		;
	for (lo = 0; owner[lo]; lo++)
		;
	ndog->name = malloc((ln + 1)* sizeof(char));
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
	ndog->owner = malloc((lo + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	for (i = 0; i < lo; i++)
	{
		ndog->owner[i] = owner[i];
	}
	return (ndog);
	free(ndog);
}
