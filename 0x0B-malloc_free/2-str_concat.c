#include "main.h"
#include  <stdlib.h>

/**
 * *str_concat - return two strings returned where the pointer should
 * point to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 * @s1: pointer of the first character
 * @s2: pointer of the second character
 * Return: NULL if empty string is pass and on failure return NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *cat;

	if (s1)
	{
		while (s1[len1])
			++len1;
	}
	else
		s1 = "";
	if (s2)
	{
		while (s2[len2])
			++len2;
	}
	else
		s2 = "";

	cat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (!cat)
		return (NULL);

	if (s1)
	{
		for (len1 = 0; s1[len1]; ++len1)
			cat[len1 + len2] = s1[len1];
	}
	if (s2)
	{
		for (len2 = 0; s2[len2]; ++len2)
			cat[len1 + len2] = s2[len2];
	}
	cat[len1 + len2] = '\0';
	return (cat);

}
