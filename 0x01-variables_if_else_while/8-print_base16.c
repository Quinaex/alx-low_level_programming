#include <stdio.h>
/**
 * main - a program that prints all the numbers of
 * base 16 in lowercase
 * Return: 0 if successful
 */

int main(void)
{
	char x;

	int y;

	x = 'a';
	y = 0;
	while
		(y < 10)
		{
			putchar(y + '0');
			y++;
		}
	while
		(x <= 'f')
		{
			putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
