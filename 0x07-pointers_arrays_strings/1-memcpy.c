#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destnation
 * @src: source
 * @n: umber of bytes to be copied
 *
 * Return: poiter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j = 0;

	while (*(dest + 1) != '\0')
		i++;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
