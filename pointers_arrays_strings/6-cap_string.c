#include "main.h"
/**
 * cap_string - Entry point
 * @a: description for str
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *a)
{
int i = 0, j = 0;
while (a[i] != '\0')
{
if (a[i] == ' '|| a[i] == '\n' || a[i] == '\t' )
{
if (a[i + 1] > 96)
{
a[i + 1] = a[i + 1] - 32;
}
}
if (a[i] == '.' && a[i+1] == 'h' )
{
a[i + 1] = a[i + 1] - 32;
}
i++;
}
return (a);
}
