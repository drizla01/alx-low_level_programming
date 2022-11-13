#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * *malloc_checked - a funtion that allocate memory using malloc
 * @b: an integer that designed that value of memory that will be assigned
 * Return: a pointer to the allocated memory, if the malloc fails, the malloc
 * check function should cause normal process termination with a status value
 * of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
