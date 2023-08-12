#include "main.h"
#include <stdlib.h>
/**
 * print_times_table - a function that
 * prints the n times table, starting with 0.
 * Return: no value.
 * @n: integer.
 */
void print_times_table(int n)
{
	int a = 0;
	if (n <= 15)
	{
	while (a <= 10)
	{
		printf("%d, ", n * a);
		a++;
			if (a == n * 10)
			{
			printf("\n");
			}
	}
	}
	else if (n > 15)
	{
		exit(EXIT_FAILURE);
	}
}
