#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function for  concatenates two strings
 *
 * @s1: - string 1
 * @s2: - string 2
 *
 * Return: Always 0
 */
{
	int la = 0, lb = 0, i = 0, lc;
	char *array;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (s1[la] != '\0')
	{
		la++;
	}
	while (s2[lb] != '\0')
	{
		lb++;
	}
	lc = la + lb + 1;
	array = malloc(lc * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < la; i++)
		array[i] = s1[i];
	for (i = 0; i < lb; i++)
	{
		array[i + la] = s2[i];
	}
	array[i + la] = '\0';
	return (array);
}
