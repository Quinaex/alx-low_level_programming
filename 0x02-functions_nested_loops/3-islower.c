#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: character to be checked
 * Return: 1 if lowercase character or 0 if otherwise
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
