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
printf("%d\n", n);
}
else if (n == 0)
{
printf("0\n");
}
else if (n < 0)
{
n=0 - n;
printf("%d\n", n);
}
return (0);
}
