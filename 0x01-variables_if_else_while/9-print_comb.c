#include <stdio.h>
/**
 * main - entry point
 * Return:0 if false, otherwise if otherwise.
 */
int main(void)
{
	int a = 47;
	int b = 10;
	int c = 44;
	int s = 32;
while (a <= 56)
{
	a++;
	putchar(a);
if (a == 57)
	{
		continue;
	}
	putchar(c);
	putchar(s);
}
	putchar(b);
	return (0);
}
