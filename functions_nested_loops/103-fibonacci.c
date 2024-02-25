#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int i;
unsigned long a, b, c;
a = 1;
b = 1;
for (i = 1; i < 32; i++)
{
c = a + b;
if (i < 49)
{
a = b;
b = c;
}
if (c % 2 == 0)
{
c = c + c;
}
}
printf("%lu", c);
printf("\n");
return (0);
}
