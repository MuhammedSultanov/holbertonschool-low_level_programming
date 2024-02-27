#include <stdio.h>
/**
 * print_triangle - Entry point
 * @size: var
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
        int i,  j, k;
        
        if (size > 0)
        {
            for (i = 0; i < size ; i++)
            {
                    for (j = i; j < size - 1; j++)
                    {
                            printf(" ");
                    }
                    for (k = i + 1; k > 0; k--)
                    {
                            printf("#");
                    }
                    
                    printf("\n");
            }
        }
        else
        {
            printf("\n");
        }
}
