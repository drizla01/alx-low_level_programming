#include "main.h"

/**
 * rev_string - return the reverse of string
 * @s: variable that store the string
 */
void rev_string(char *s)
{
	char temp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len1--] = temp;
	}
}
