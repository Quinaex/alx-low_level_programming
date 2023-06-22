#include "main.h"
/*
 * _isalpha - a function that checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if alphabet or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
