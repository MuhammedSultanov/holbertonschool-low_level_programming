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
putchar('+');
putchar(',');
putchar('\n');
return (1);
}
else if ( n == 0 )
{
putchar('0');
putchar(',');
putchar('\n');
return (0);
}
else
{
putchar('-');
putchar(',');
putchar('\n');
putchar(-1);
}
return (0); } 
