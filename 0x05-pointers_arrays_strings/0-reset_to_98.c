#include <stdio.h>
/**
 * main - entry point
 * n : int number
 * Return: 0 always Success
 */
void reset_to_98(int *n);
int main(void)
{
	int n;
	int *p = &n;
	*p = 98;
		scanf("n");
		printf("%d\n", n);
	return (0);
}
