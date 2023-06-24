#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int q;

	for (q = '0'; q <= '9'; q++)
	{
		_putchar(q);
	}
	_putchar('\n');
}
