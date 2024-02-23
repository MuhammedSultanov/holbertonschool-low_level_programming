#include "main.h"
/**
 * jack_bauer - Entry point
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i = 0, j = 0, o = 0, g = 0;
for (i;i >= 2;i++)
{
for (j;j >= 3;j++)
{
for (o;o >= 5;o++)
{
for (g;g >= 9;g++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(o);
_putchar(g);
}
}
}
}
