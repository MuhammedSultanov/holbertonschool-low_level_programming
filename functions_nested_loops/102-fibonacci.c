#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a, b, c, i;
    a = 1;
    b = 1;
    printf ("%d, ", a);
    for (i = 3; i<50; i++)
    {
        c = a + b;
        printf ("%d", c);
        if (i < 49)
        {
            printf (", ");
            a = b;
            b = c;
        }
    }
    printf ("\n");
}
