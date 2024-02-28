#include "main.h"
/**
 * void _puts - Entry point
 * @str: description for str
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
while (*str)
{
putchar(*str);
*str++;
}
}
