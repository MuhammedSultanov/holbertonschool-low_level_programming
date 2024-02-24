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
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(n);
					putchar(m);
					if (i != 57 || j != 56 || n != 57 || m != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				m = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
