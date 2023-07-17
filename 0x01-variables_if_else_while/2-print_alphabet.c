#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 if False, otherwise if otherwise.
 */
int main(void)
{
	char a = 96;
	char b = '\n';
while (a < 122)
{
	a++;
	putchar(a);
}
	putchar(b);
	return (0);
}
