#include "main.h"

/**
 * main - Entry point
 * @c - var
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 || c <= 90)
	{
		_putchar('c');
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar('c');
		_putchar(':');
		_putchar(' ');
	}
	return (0);
}
