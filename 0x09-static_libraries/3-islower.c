#include "main.h"

/**
 *_islower - check the code for a lowercase character
 *@c : parameter to check
 *
 *Description: checks for lowercase characters
 *
 * Return: always 0;
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
