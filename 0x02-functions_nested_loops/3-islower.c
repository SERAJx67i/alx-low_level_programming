#include "main.h"
#include <ctype.h>
/**
 * _islower - a function that checks for lowercase character.
 * Return: 1 if c is a lowercase or return 0 if otherwise.
 * @c: an integer.
 * return: 1 if c is lowercase or return 0 if  otherwise.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
