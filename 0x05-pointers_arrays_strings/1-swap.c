#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int to swap
 * @b: int to swap
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}