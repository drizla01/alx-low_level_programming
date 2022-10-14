#include <stdio.h>

/**
 * main - prints both lower and upper case aplhabets
 * Return: 0 if executed completely
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
		putchar(alphabets);
		}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		{
		putchar(alphabets);
		}
		putchar('\n');
		return (0);
}
