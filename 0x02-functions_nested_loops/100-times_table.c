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
	if (n <= 15 && n != 0)
			while (a <= n && b < 11)
			{
				if (b <= 9)
				{
				printf("%d,   ", a * b);
				}
				b++;
			if (b > 10)
			{
				printf("\n");
				a++;
				b = 0;
			}
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
