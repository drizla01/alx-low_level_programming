#include <stdio.h>

/**
 * main - prints all aregument it receives.
 * all should be printed include the first line
 * print one argument per line
 * @argc: length of strings
 * @argv: array of string entered
 * Return: 0 if successful, Nonzero otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
