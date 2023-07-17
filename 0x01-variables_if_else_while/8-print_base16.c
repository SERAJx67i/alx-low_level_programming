#include <stdio.h>
/**
 * main - entry point
 * Return:0 if false, otherwise if otherwise.
 */
int main(void)
{
	char s = 47;
	char a = 96;
	char b = '\n';
while (s < 57)
{
	s++;
	putchar(s);
}
while (a < 102)
{
	a++;
	putchar(a);
}
	putchar(b);
	return (0);
}
