#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: swap and stores for b
 * @b: swap and stores for a
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	int q = *b;
	*a = q;
	*b = p;
}
