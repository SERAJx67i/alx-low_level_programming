#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 * @n: an integer
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
		fflush(stdout);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
		fflush(stdout);
	}
	else
	{
		printf("-");
		return (1);
		fflush(stdout);
	}
}
