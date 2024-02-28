#include "main.h"
/**
 * print_rev - Entry point
 * @s: description for s
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
while (*s)
{
s++;
}
_putchar('\n');
while (*s >= 0)
{
_putchar(*s);
s--;
}
}

