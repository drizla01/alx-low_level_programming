#include <stdio.h>

/**
 * main - return the number of argument
 * @argc: size of argv
 * @argv: array of string
 * Return: 0 if successful, 0 otherwise
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
