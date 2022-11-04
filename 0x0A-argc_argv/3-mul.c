#include "stdlib.h"
#include <stdio.h>

/**
 * main - program multiplies two numbers
 * it should prints the multiplcation result, golled by a new line
 * you can assume the two number and result can be stored in an integer
 * if the program does not recieve two argument, you should print error,
 * followed by new line and return 1
 * @argc: size of n
 * @argv: array of strings
 * Return: 0 if successful, error of argument not complete.
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
