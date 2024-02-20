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
for (y = '0' ; y <= '9'; y++)
{
for (z = '0'; z <= '9'; z++)
{
for (k = '0'; k <= '9'; k++)
{
putchar(x);
putchar(y);
if (!(x == '0' && y == '0' && z == '0' && k == '0'))
{
putchar(' ');
putchar(z);
putchar(k);
{putchar(',');
putchar(' '); }}}}}}
putchar('\n');
return (0); }
