#include "main.h"
#include <stdlib.h>

/**
 * char *string_nconcat - a function that concatenate two strings
 * @s1: newly allocated string
 * @s2: next allocated string
 * @n: designated memory allocated which is an integer
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL,
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index]; index++)
	{
		len++;
	}
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';
	return (concat);
}
