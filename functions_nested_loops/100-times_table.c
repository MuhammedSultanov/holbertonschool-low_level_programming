#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i = 0, j = 0;
    if (!(n < 0 || n > 15))
    {
        while (i <= n)
        {
            while (j <= n)
            {
                if (i * j <= 9)
                {
                    _putchar((i * j) % 10 + '0');
                    
                }
                else if (i * j <= 99)
                {
                    _putchar((i * j) / 10 + '0');
                    _putchar((i * j) % 10 + '0');
                    
                }
                else
                {   _putchar((i * j) / 100 + '0');
                    _putchar(((i * j) / 10) % 10 + '0');
                    _putchar((i * j) % 10 + '0');
                    
                }    
                if (j != n)
                {
                    _putchar(',');
                    if (i * (j + 1) <= 9)
                    {
                        _putchar(' ');
                        _putchar(' ');
                        _putchar(' ');
                    }
                    else if (i * (j + 1) >= 100)
                    {
                        _putchar(' ');
                    }
                    else
                    {
                        _putchar(' ');
                        _putchar(' ');
                    }
                    
                }j++:
            }
            _putchar('\n');
            i++;
            j = 0;
        }
    }
}
