#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i = 0, j = 0, o = 0, g = 0;

for (i = 0; i <= 2;i++)
{
for (j = 0;j <= 3;j++)
{
for (o = 0;o <= 5;o++)
{
for (g = 0;g <= 9;g++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(o);
_putchar(g);
_putchar('\n');
}
}
}
}
}
