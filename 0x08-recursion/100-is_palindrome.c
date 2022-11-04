#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - return length of string
 * @s: the string var
 * Return: the length
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
		len++;
		len += find_strlen(s + len);
	return (len);
}
/**
 * check_palindrome - check if a string is a palindrome
 * @s: the string to check
 * @len: lenth of string
 * @index: position of string
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
}

/**
 * is_palindrome - return 1 if string is palindrome, 0 otherwise
 * @s: var of the string
 * Return: 1 if true, 0 otherwise
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}
