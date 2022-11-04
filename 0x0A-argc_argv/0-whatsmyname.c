#include <stdio.h>

/**
 * main - return the name of the program
 * @argc: number of arguments
 * @argv: strings of arguments
 *
 * Return: 0 if successful, nonzero otherwise
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
