#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string to be evaluated.
 * Return: string length
 */

int _strlen(char *s)
{
	int q = 0;

	while (s[q] != '\0')
	{
		q++;
	}

	return (q);
}
