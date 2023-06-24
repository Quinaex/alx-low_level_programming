#include <stdio.h>
/**
 * main - a program that prints the numbers from 1 to 100
 * for multiples of 3 print fizz and for the multiples of 5 print Buzz
 * For multiples of both 3 and 5 print FizzBuzz
 *
 * Return: 0 if successful
 */

int main(void)
{
	int q;

	for (q = 1; q <= 100; q++)
	{
		if (q % 3 == 0 && q % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (q % 5 == 0 && q % 3 != 0)
		{
			printf(" Buzz");
			if (q != 100)
			{
				printf(" ");
			}
		}
		else if (q % 5 == 0 && q % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", q);
		}
	}
	printf("\n");

	return (0);
}
