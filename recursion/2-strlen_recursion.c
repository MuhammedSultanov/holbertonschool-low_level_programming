#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: - s
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int len;
while (s[len] != '\0')
{
len++;
}
return (len);
}
