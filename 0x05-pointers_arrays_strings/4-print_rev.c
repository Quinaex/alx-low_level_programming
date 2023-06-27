#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s: string to be reversed
 * Return: 0
 */

void print_rev(char *s)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;

	while (y >= 0)
	{
		_putchar(s[y]);
		y--;
	}
	_putchar('\n');
}
