#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10
 * starting from 0
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
			putchar('\n');
	return (0);
}
