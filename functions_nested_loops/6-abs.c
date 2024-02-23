#include "main.h"
/**
 * print_sign - Entry point
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n > 0)
{
_putchar(n);
}
else if (n == 0)
{
_putchar(0);
}
else if (n < 0)
{
n=0 - n;
_putchar(n);
}
return (0);
}
