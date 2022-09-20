#include "main.h"

/**
 * swap_int - swap the values of two params
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
