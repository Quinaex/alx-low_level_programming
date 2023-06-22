#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @q: num to be computed
 * Return: value of last digit
 */
int print_last_digit(int q)
{
	int lst;

	lst = q % 10;
	if (lst < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
