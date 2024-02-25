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
    for (i = 1; i<51; i++)
    {
        a = b;
        b = c;
        c = a + b;
        printf ("%d, ", c);
    }
    printf ("\n");
}
