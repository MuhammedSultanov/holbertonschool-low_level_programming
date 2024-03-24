#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: -  the string to be printed between numbers
 * @n: - the number of integers passed to the function
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (seperator != NULL && i != n - 1)
{
printf("%s", seperator);
}
}
va_end(args);
putchar('\n');
}
