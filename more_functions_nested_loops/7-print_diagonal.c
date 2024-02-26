#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: var
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j > 0; j--)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
