#include "main.h"

/**
 * _isupper - return uppercase character
 * @c: variable to store character
 * Return: i if c is upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
