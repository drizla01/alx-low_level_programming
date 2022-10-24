#include "main.h"

/** swap_int - swap integer using two different pointers,
 * assigned to two different variable
 * @a: pointer to first integer
 * @b: pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
