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
char cap[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'}
while (a[i] != '\0')
{
j = 0;
while (cap[j] != '\0')
{
if (a[0] > 96 && a[0] < 123 )
{
a[0] = a[0] - 32;
i++;
}
if (a[i] == cap[j] && (a[i + 1] > 96 && a[i + 1] < 123))
{
a[i + 1] = a[i + 1] - 32;
}
j++;
}
}
return (a);
}
