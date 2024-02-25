#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long n1, n2, n1h1, n1h2, sum, n2h1, n2h2, h3, h4;
n1 = 0;
n2 = 1;
for (i = 0; i < 92; i++)
{
sum = n1 + n2;
printf("%lu, ", sum);
n1 = n2;
n2 = sum;
}
n1h1 = n1 / 10000000000;
n2h1 = n2 / 10000000000;
n1h2 = n1 % 10000000000;
n2h2 = n2 % 10000000000;
for (i = 93; i < 99; i++)
{
h3 = n1h1 + n2h1;
h4 = n1h2 + n2h2;
if (n1h2 + n2h2 > 9999999999)
{
h3 += 1;
h4 %= 10000000000;
}
printf("%lu%lu", h3, h4);
if (i != 98)
printf(", ");
n1h1 = n2h1;
n1h2 = n2h2;
n2h1 = h3;
n2h2 = h4;
}
printf("\n");
return (0);
}
