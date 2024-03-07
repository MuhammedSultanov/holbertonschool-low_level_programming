#include "main.h"
/**
 * print_diagsums - check the code
 * @a: - a
 * @size: - size
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int i;
unsigned int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 = sum1 + a[i * size + i];
sum2 = sum2 + a[i * size + (size - 1 - i)];
}
printf("%lu, %lu\n", sum1, sum2);
}
