#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int d;
if (n > 0)
{
n = n % 10;
_putchar (n);
return (n);
}
else if (n == 0)
{
_putchar (n);
return (n);
}
else if (n < 0)
{
d = n * (-1);
d = d % 10;
_putchar (d);
return (d);
}
return (0);
}
