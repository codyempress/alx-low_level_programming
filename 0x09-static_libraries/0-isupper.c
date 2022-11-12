#include "main.h"
#include  <stdio.h>
#include <ctype.h>

/**
 *_isupper - checks for uppercase characters
 *@c: argument
 *Return: returns 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
