#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet
 * in lowercase, followed by a new line.
 * Return: 0 IF Success.
 */
void print_alphabet(void)
{
	int a = 96;
	int b = 10;
		while (a < 122)
		{
		a++;
		putchar(a);
		}
		putchar(b);
}
