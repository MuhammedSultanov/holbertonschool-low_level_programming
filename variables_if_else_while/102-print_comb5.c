#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, n, m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (n = i; n <= 57; n++)
			{
				for (m = 49; m <= 57; m++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(' ');
					_putchar(n);
					_putchar(m);
					if (i != 57 || j != 56 || n != 57 || m != 57)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				m = 48;
			}
		}
	}
	_putchar('\n');
	return (0);
}
