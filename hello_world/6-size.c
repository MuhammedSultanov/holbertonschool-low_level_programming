#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this code for print size of various
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int(intType);
	char(charType);
	long(longType);
	long long(longlongType);
	float(floatType);

	printf("Size of a char: %zu bytes\n", sizeof(intType));
	printf("Size of an int: %zu bytes\n", sizeof(charType));
	printf("Size of a long int:%zu bytes\n", sizeof(longType));
	printf("Size of a long long int:%zu bytes\n", sizeof(longlongType));
	printf("Size of a float:%zu bytes\n", sizeof(floatType));
	return (0);
}
