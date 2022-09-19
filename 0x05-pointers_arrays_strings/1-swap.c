#include "main.h"

/**
 * swap_int- interchanges a and b
 * @a: input 1
 * @b: input 2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

		swap = *a;

	*a = *b;

	*b = swap;
}
