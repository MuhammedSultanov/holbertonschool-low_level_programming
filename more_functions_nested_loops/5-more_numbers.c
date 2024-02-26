#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 15; i++)
	{
		for (j = 0; j <10; i++)
		{
			if(i < 10)
			{
			_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
	}
	_putchar('\n');
}
