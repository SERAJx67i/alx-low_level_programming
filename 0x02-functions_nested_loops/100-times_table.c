#include "main.h"
/**
 * print_times_table - a function that 
 * prints the n times table, starting with 0.
 * Return: no value.
 * @n: integer.
 */
void print_times_table(int n)
{
	int a;
	a = 0;
	while (a <= 10 )
	{
		printf("%d, ", n * a);
		a++;
		if (a == n * 10)
		{
			printf("\n");
		}
	}
}
