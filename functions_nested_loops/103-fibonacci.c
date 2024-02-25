#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, i, d;
a = 1;
b = 1;
d = 0;
for (i = 3; i < 34; i++)
{
c = a + b;
if ( c % 2 == 0)
{
d = d + c;
}
a = b;
b = c;
}
printf("%d", d);
printf("\n");
return (0);
}
