#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all- A function for prints anything.
 * @format: - a list of types of arguments passed to the function
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);

char c;
int i;
float f;
char *s;
int index = 0;

while ((c = format[index++]) != '\0')
{
if (c == 'c')
{
printf("%c", va_arg(args, int));
}
else if (c == 'i')
{
i = va_arg(args, int);
printf("%d", i;
}
else if (c =='f')
{
f = va_arg(args, double)
printf("%f", f);
}
else if (c == 's')
{
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
}
}
va_end(args);
putchar('\n');
}
