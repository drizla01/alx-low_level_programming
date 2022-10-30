#include "main.h"

/**
 * _isdigit - check for digit from 0 to 9
 * @c: variable assign to digit
 * Return: 0 if succesful
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	else
		return (0);
}
