#include <stdio.h>
/**
 * main - prints all possible combo of two numbers
 * Return: 0 if succesful
 */
int main(void)
{
	int x = '0';
	int y = '0';

	for (y = '0'; y <= '9'; y++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (y > x)
			{
				putchar(y);
				putchar(x);
				if (x != '9' || y != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
