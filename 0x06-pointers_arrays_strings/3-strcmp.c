#include "main.h"
#include <string.h>

/**
 * _strcmp - works like stndarad function
 * @s1: parameter
 * @s2: parameter
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k, n;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (i > j)
	{
		n = *(s1 + i) - *(s2 + j);
	}
	else if (i > j)
	{
		n = *(s1 + i) - *(s2 + j);
	}
	else
	{
		for (k = 0; k < i; k++)
		{
			if (s1[k] == s2[k])
				n = 0;
			else
				n = *(s1 + i) - *(s2 + 1);
		}
	}
	return (n);
}
