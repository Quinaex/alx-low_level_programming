#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: input array
 * @n: length of array
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0; g <= n; g++)
	{
		if (g < (n - 1))
		{
			printf("%d, ", *(a + g));
		}
		else if (g == n - 1)
		{
			printf("%d", *(a + (n - 1)));
		}
	}
	printf("\n");
}
