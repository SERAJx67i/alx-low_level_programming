#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - a function that prints all
 * natural numbers from n to 98, followed by a new line.
 * Retrun: no value.
 * @n: an integer
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("98\n");
			exit(EXIT_FAILURE);
		}
	printf("%d, ", n);
	n++;
	}
	while (n >= 98)
	{
		if (n == 98)
		{
			printf("98\n");
			exit(EXIT_FAILURE);
		}
		printf("%d, ", n);
		n--;
	}
}
