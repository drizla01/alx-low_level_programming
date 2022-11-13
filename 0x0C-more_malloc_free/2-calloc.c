#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory for an array, using malloc
 * @nmemb: The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @size: size of the array, the memory is set to zero
 * Return: If nmemb or size is 0, then _calloc returns NULL,
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)pointer + i) = 0;
	return (pointer);
}
