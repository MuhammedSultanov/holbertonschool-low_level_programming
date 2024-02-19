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

	printf("Size of a char: %lu bytes\n", sizeof(intType));
	printf("Size of an int: %lu bytes\n", sizeof(charType));
	printf("Size of a long int:%lu bytes\n", sizeof(longType));
	printf("Size of a long long int:%lu bytes\n", sizeof(longlongType));
	printf("Size of a float:%lu bytes\n", sizeof(floatType));
	return (0);
}
