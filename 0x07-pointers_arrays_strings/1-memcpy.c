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
	memcpy(dest, src, n);
	return (dest);
}
