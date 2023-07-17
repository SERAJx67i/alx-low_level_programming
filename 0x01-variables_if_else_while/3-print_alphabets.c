#include <stdio.h>
/**
 * main - entry point
 * Return:0 if false, otherwise if otherwise.
 */
int main(void)
{
	char a = 64;
	char c = 96;
	char b = '\n';
while (a < 90)
{
	a++;
		putchar(a);
}
while (c < 122)
{
	c++;
		putchar(c);
		putchar(b);
}
	return (0);
}
