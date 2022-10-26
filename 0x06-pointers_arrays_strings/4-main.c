#include "main.h"
#include <stdio.h>

/**
 * print_array - show the list of element in the array
 * @a: an array of integer
 * @n: the number of elements to swap
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");

}

/**
 * main - check the code
 * print_array - output the element of the array
 * reverse_array - reverse the content of the arrar
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
