#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that print a name
 * @name: variable that takes in name7
 * @*f: pointer to the function
 * @Return: the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
