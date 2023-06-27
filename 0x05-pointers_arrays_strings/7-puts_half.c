#include "main.h"

/**
 * puts_half - a function that prints half of a string followed by new line
 * @str: to be printed
 */

void puts_half(char *str)
{
	int x = 0;
	int z;

	if (str[0] != '\0')
	{
	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 != 0)
	{
		for (z = (x + 1) / 2; z < x; z++)
		{
			_putchar(str[z]);
		}
	}
	else
	{
		for (z = x / 2; z < x; z++)
		{
			_putchar(str[z]);
		}
	}
	}
	else
	{
	}
	_putchar('\n');
}
