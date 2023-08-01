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
		if (abs(a) >  && abs(b) > abs(c))
		{
			else if (a < 0 && b < 0 && c < 0)
			{
				largest = c;
			}
				largest = a;
		}
		else if (abs(b) > abs(a) && abs(a) > abs(c))
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
			return (largest);
}
