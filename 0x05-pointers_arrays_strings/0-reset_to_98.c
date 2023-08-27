#include "main.h"
/**
 * reset_to_98 - a function that takes a pointer to an int as
 * a parameter and updates the value it points to 98.
 * @n: integer.
 * Return: no value.
 */
void reset_to_98(int *n)
{
	int a = 98;
		printf("%d", *n);
			n = &a;
			*n = a;
		printf("%d", *n);

}
