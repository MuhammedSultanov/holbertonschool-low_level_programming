#include "main.h"
/**
 * print_sign - Entry point
 * @c: variable
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if ( n > 0 )
{
_putchar('+');
_putchar(',');
_putchar('\n');
return (1);
}
else if ( n == 0 )
{
_putchar('0');
_putchar(',');
_putchar('\n');
return (0);
}
else
{
_putchar('-');
_putchar(',');
_putchar('\n');
_putchar(-1);
}
return (0); } 
