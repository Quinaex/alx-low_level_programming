#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int ux;

	if (n < 0)
	{
		ux = -n;
		_putchar('-');
	} else
	{
		ux = n;
	}

	if (ux / 10)
	{
		print_number(ux / 10);
	}

	_putchar((ux % 10) + '0');
}
