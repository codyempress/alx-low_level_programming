#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string;
 * @dest: destination
 * @src: source
 * @n: count
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
