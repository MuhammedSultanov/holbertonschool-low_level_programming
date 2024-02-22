#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	
	int i = 0;

	while (i<10)
	{
		_putchar(a[i]);
		i++;
	}
}
