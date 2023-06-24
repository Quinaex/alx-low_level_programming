#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: to print
 * Return: 1 if successful
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
