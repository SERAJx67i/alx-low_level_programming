#include "main.h"
/**
 * main - entry point
 * print_alphabet - function to print
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
