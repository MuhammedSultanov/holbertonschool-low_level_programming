#include "main.h"
/**
 * leet - Entry point
 * @s: description for s
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == 97 || *(s + i) == 65)
{
s[i] = '4';
}
if (*(s + i) == 101 || *(s + i) == 69)
{
s[i] = '3';
}
if (*(s + i) == 111 || *(s + i) == 79)
{
s[i] = '0';
}
if (*(s + i) == 116 || *(s + i) == 84)
{
s[i] = '7';
}
if (*(s + i) == 108 || *(s + i) == 76)
{
s[i] = '1';
}
i++;
}
return (s);
}
