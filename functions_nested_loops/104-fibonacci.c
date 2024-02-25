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
printf("%lu, ", a);
for (i = 1; i < 99; i++)
{
c = a + b;
if (c > 10000000000)
{
printf("%lu%010lu", c / 10000000000, c % 10000000000);
}
else
{
printf("%lu", c);
}
if (i < 98)
{
printf(", ");
a = b;
b = c;
}
}
printf("\n");
return (0);
}
