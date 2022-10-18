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
	if (c >= 'a' or c <= 'z' or c >= 'A' or c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
