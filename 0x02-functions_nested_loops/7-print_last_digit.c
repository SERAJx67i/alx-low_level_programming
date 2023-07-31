#include "main.h"
/**
 * print_last_digit - a function that
 * prints the last digit of a number.
 * @int: an integer
 * Return: 0 always (Success)
 */
int print_last_digit(int);
int print_last_digit(int n)
{
	int result = (n % 10);
	if (n % 10 > 0 || n % 10 <= 0)
	{
	printf("%d", result);
	}
	return (result);
}
