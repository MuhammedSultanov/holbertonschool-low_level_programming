#include "main.h"
/**
 * _puts - Entry point
 * @str: description for str
 *
 * Return: Always 0 (Success)
 */
int _strcmp(const char *s1, const char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
