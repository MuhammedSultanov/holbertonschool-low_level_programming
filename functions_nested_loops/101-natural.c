#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int i, c;
c = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 5 == 0) || (i % 3 == 0))
{
c = c + i;
}
}
printf("%d\n", c);
return (0);
}
