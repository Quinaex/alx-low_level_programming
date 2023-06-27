#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string to be printed
 * Return: 0
 */

void puts2(char *str)
{
	int x;
	int j;
	int z;

	j = 0;
	if (str[j] != '\0')
	{
	_putchar(str[0]);

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	for (z = 1; z < x; z++)
	{
		if (z % 2 == 0)
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
