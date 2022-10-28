#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes al letters
 * @a: string
 *
 * Return: new string
 */

char *cap_string(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] <= 'z' || a[i] >= 'a')
		{
			a[i] = toupper(a[i]);
		}
		i++;
	}
	return (a);
}
