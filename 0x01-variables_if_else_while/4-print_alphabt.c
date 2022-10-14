#include <stdio.h>

/**
 * main - print lowercase letters except 'q' and 'e'
 * Return: 0 if executed successfully
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
		putchar(alphabets);
	}
	putchar('\n');
	return (0);

}
