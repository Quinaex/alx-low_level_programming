#include <stdio.h>
/**
 * main - a program that prints numbers in base 10
 * starting from 0 without using printf
 * Return: 0 if successful
 */

int main(void)

{
	int x;

	x = 0;

	while
		(x < 10) {
			putchar(x + '0');
			x++;
		}
	putchar('\n');
	return (0);
}
