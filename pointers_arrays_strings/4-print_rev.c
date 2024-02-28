#include "main.h"
/**
 * print_rev - Entry point
 * @s: description for s
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int i = 0 ;
while (s[i] != '\0')
{
i++;
}
while(*s >= 0)
{
putchar(s[i-1]);
s--;
}
}
