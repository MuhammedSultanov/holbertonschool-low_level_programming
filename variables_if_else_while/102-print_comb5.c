#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int x;
int y;
int z;
int k;
for (x = '0'; x <= '9'; x++)
{
for (y = x ; y <= '9'; y++)
{
for (z = '0'; z <= '9'; z++)
{
for (k = z + 1; k <= '9'; k++)
{
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(k);
putchar(',');
putchar(' '); }}}}
putchar('\n');
return (0); }
