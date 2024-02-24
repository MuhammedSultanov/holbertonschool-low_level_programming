#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
    int i = 0, j = 0;
    
    while (i < 10)
    {
        while (j < 10)
        {
            if (i*j < 10)
            {
                putchar((i * j) % 10 + '0');
            }
            else{
                putchar((i * j) / 10 + '0');
                putchar((i * j) % 10 + '0');
            }
            if(j != 9)
            {
                putchar(',');
                if(i * (j + 1) <= 9){
                    putchar(' ');
                    putchar(' ');
                }
                else{
                    putchar(' ');
                }
            }
            j++;
        }
        putchar('\n');
        i++;
        j = 0;
    }
}
