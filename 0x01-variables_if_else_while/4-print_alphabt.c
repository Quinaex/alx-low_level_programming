#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase except q and e
 * Return: 0 if successful
 */
int main(void)
{
	char x;

	x = 'a';
	while
		(x <= 'z')
		{
			if (x != 'e' && x != 'q')
				putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
