#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @d: number to be checked
 * Return: abs value of num or 0
 */
int _abs(int d)

{
	if (d < 0)
	{
		int abs_v;

		abs_v = d * -1;
		return (abs_v);
	}
	return (d);
}
