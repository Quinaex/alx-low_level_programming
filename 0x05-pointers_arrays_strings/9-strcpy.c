#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: first pointer
 * @src: second pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int m = -1;

	do {
		m++;
		dest[m] = src[m];
	} while (src[m] != '\0');
	return (dest);
}
