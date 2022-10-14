#include <stdio.h>

/**
 * main - output a text of lowercase alphabet
 * Return: 0 if successfully executed
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
