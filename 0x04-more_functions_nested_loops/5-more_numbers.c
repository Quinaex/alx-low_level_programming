#include "main.h"

/**
 * more_numbers - a function that prints 0 to 14 ten times
 *
 * Return: Void
 */

void more_numbers(void)
{
	int p, q;

	for (q = 0; q < 10; q++)
	{
		p = 0;

		while (p < 15)
		{
			if (p > 9)
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
			p++;
		}
		_putchar(('\n'));
	}
}
