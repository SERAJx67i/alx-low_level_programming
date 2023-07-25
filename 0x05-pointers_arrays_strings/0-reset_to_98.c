#include <stdio.h>
#include <main.h>
/**
 * main - entry point
 * Return: 0 always Success
 */
void reset_to_98(int *n);
int main(void)
{
	int n = 98;
	int *p = &n;
	*p = 98;
	return (0);
}
