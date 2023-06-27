#include "main.h"

/**
 * _puts - a function that prints a string
 * followed by a new line, to stdout.
 * @str: string pointer
 * Return: string and a new line
 */

void _puts(char *str)
{
	int q = 0;

	while (str[q] != '\0')
	{
		_putchar(str[q]);
		q++;
	}
	_putchar('\n');
}
