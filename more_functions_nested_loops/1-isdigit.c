#include "main.h"
/**
 * _isupper - Entry point
 * @c: variable
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
