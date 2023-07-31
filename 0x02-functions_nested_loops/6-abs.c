#include "main.h"
#include <stdlib.h>
#include <inttypes.h>
/**
 * _abs - a function that computes the absolute value of an integer.
 * Return: 0 always (Success)
 */
int _abs(int);
int _abs(int a)
{
	int result = abs(a);
		printf("%d",result);
		return (0);
}
