#include "main.h"
/**
 * puts_half - Entry point
 * @str: description for s
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int a = 0, len = 0;
while (*(str + len) != '\0')
{
len++;
}
for (a = len / 2; a < len; a++)
{
putchar(str[a]);
}
}
