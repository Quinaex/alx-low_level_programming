#include "main.h"
/**
 * print_alphabet_x10 -  a function that prints 10 times the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char x;
	int y;

	y = 0;
	while (y < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
			_putchar('\n');
			y++;
	}
}
