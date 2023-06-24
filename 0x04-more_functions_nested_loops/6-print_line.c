#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: used to print the line
 *
 * Return: void
 */

void print_line(int n)
{
	int x = 1;

	while (x <= n)
	{
		if (x <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
