#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: character
 * @n: memory size
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
