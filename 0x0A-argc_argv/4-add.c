#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * if no number is passed print 0, followed by new line
 * if number contian symbol print error, then newline
 * assume addition can be stored
 * @argc: size of argv
 * @argv: array of strings
 * Return: 0 if sucess, Error if there are symbol and nonzero if fail
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum, num;

	sum = 0;
	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (sum);
}
