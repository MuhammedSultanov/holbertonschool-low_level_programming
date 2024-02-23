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
return (n);
}
else if (n == 0)
{
return (n);
}
else if (n < 0)
{
d = 0 - n;
d = d % 10;
return (d);
}
return (0);
}
