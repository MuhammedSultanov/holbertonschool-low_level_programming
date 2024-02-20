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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{printf("%d",n," is positive");
	}
	else if (n < 0)
	{printf("%d",n," is negative");
	}
	else
	{printf("%d",n," is zero");
	}
	return (0);
}
