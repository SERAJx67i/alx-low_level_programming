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
		int b = 0;
	while (a <= 10 && b <= n)
	{
		if (n <= 15 && n != 0)
		{
			printf("%d, ", a * b);
			a++;
			b++;
		}
		else if (n > 15 || n < 0)
		{
			exit(EXIT_FAILURE);
		}
		else if (n == 0)
		{
			printf("0\n");
			exit(EXIT_FAILURE);
		}
	}
}
