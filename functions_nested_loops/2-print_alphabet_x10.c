#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;
	j = 0;
	while(j<11)
	{
		j++;
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (a[i])
	{
		_putchar(a[i]);
		i++;
	}
	
	}
}
