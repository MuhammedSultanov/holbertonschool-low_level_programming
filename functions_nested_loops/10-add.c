#include "main.h"
/**
 * add - Entry point
 *
 * Return: Always 0 (Success)
 */
int add(int n, int m)
{
int v, l;
char returnVvar;
v = n + m;
l = (v % 10) + '0';
returnVvar = l;

_putchar(v / 10 + '0');
_putchar(v % 10 + '0');
return returnVvar;
}
