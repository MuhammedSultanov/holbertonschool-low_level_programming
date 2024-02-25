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
for (i = 1; i < 98; i++)
{
c = a + b;
if (c > 100000000000)
{
printf("%lu%01010lu", c / 100000000000, c % 100000000000);
}
else
{
printf("%lu", c);
}
if (i < 97)
{
printf(", ");
a = b;
b = c;
}
}
printf("\n");
return (0);
}
