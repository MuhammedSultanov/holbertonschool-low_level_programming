#include "main.h"
/**
 * print_sign - Entry point
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
int d;
{
if (n > 0)
{
printf("%d\n", n);
}
else if (n == 0)
{
printf("0\n");
}
else if (n < 0)
{
d = 0 - n;
printf("%d\n", d);
}
return (0);
}
