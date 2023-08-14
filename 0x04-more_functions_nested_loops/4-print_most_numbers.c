#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from
 * 0 to 9 except 2 and 4, followed by a new line.
 * Retrun: no value.
 */
void print_most_numbers(void)
{
	char a = 48;
	char b = 10;
		while (a <= 57)
		{
			if (a == 50 || a == 52)
			{
				continue;
			}
			_putchar(a);
			a++;
		}
			_putchar(b);
}
