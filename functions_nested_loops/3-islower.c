#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c != i)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}


return(0);
}
