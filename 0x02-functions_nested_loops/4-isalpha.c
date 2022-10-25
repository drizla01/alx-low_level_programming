#include "main.h"

/**
 * _isalpha - checks for alphabets character
 * @c: takes in letter, loercase or uppercase
 * Return: 1 if c is letter and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
