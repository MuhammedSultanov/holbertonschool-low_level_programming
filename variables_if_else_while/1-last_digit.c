#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this code for print text on screen'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{printf("Last digit of %d is %d and is greater than 5", n, a); }
	else if (a < 6 && a != 0)
	{printf("Last digit of %d is %d and is less than 6 and not 0", n, a); }
	else
	{printf("Last digit of %d is %d and is 0", n, a); }
	return (0);
}
