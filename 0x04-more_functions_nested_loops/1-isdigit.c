#include "main.h"
#include <ctype.h>
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: an integer.
 * Return: 1 if c is digit, 0 if otherwise.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
