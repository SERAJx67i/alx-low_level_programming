#include "main.h"
#include <stdlib.h>
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;
		while (abs(a) >  && abs(b) > abs(c))
		{
			if (a < 0 && b < 0 && c < 0)
			{
				largest = c;
			}
				largest = a;
		}
		if (abs(b) > abs(a) && abs(a) > abs(c))
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
			return (largest);
}
