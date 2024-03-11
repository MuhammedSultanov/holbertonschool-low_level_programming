#include "main.h"
#include <stdio.h>
/**
 * create_array - prototype for creates an array of chars
 *
 * @size: - size of array
 * @c: char
 *
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;
 
	if (size = 0)
	{
		return(NULL);
	}
	array = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	
}
