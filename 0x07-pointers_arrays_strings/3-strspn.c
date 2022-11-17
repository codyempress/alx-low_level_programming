#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - checks length of string substring
 * @s: array
 * @accept: comparison array
 *
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = strspn(s, accept);

	return (y);
}
