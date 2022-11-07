#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: the size of the array
 *  @c: the assigned character
 *  Return: NULL if size is 0
 *  or return a  pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
