#include "main.h"

/**
 * _isalpha - function checks for any lower or upper case characters
 * @c : parameter
 *
 * Description: function checks if theres a lower or upper case character and returns 0;
 *
 * Return: always 0;
 */

int _isalpha(int c)
{
	if ((c >= 97  && c <= 122) || ( c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
