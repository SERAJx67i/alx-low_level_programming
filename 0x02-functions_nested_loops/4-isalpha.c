#include "main.h"
#include <ctype.h>
/**
 * _isalpha - a function that checks for alphabetic character.
 * Return: 1 if c is a letter, 0 if otherwise.
 * @c: an ineger
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
