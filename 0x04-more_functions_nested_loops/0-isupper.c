#include "main.h"
#include <ctype.h>
/**
 * _isupper - a function that checks for uppercase character.
 * Retrun: 1 if c is uppercase, or 0 if otherwise.
 * @c: an integer.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
