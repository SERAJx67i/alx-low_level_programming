#include "main.h"
#include <ctype.h>
/**
 * _isupper - a function that checks for uppercase character.
 * @c: a character.
 * Return: 1 if c is uppercase, or 0 if otherwise.
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
