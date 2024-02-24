#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
    int i = 0, j = 0;
    
    while(i < 10)
    {
        while(j < 10)
        {
            if (i*j < 10)
            {
                _putchar(' ');
                _putchar((i*j) % 10 + '0');
            }
            else{
                _putchar((i*j) / 10 + '0');
                _putchar((i*j) % 10 + '0');
            }
            j++;
            if(j != 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
        i++;
        j = 0;
   }
}
