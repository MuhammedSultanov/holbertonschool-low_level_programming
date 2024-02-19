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

	printf("Size of a char: %zu byte(s)\n", sizeof(intType));
	printf("Size of an int: %zu byte(s)\n", sizeof(charType));
	printf("Size of a long int:%zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int:%zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float:%zu byte(s)\n", sizeof(floatType));
	return (0);
}
