#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
int add = 0, i = 0, j;
if (argc == 1)
{
return (0);
}
for (i; i < argc; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
if (atoi(argv[i]) != j)
{
add += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
}
}
