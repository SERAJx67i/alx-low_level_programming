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
		fflush(stdout);
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		fflush(stdout);
		return (0);
	}
	else
	{
		printf("-");
		fflush(stdout);
		return (1);
	}
}
