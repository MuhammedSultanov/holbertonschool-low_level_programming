#include "main.h"
/**
 * _strncpy - check the code
 * @dest: - input of function
 * @src: - src
 * @n: - n
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0, c = 0;
while (dest[a] != '\0')
{
a++;
}
for (b = 0; src[b] != '\0'; b++)
{
}
for (c = 0; c < n; c++)
{
dest[c] = src[c];
if (src[c] == '\0')
{
break;
}
}
return (dest);
}
