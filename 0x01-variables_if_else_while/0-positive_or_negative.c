#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Return: to 0 if false, return to any number otherwise.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )

		printf("is positive\n");

	else if ( n > 0 )

		printf("is negative\n");
	else
		printf("is zero\n");

	return (0);
}
