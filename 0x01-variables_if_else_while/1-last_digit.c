#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign a random number to the variable n each time it is executed.
 * Return : 0 (success)
 */

int main(void)
{
	int n;
	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	q = n % 10;

	printf("Last digit of %d is %d and is ", n, q);
	if (q > 5)
		printf("Greater than 5\n");
	else if (q == 0)
		printf("0\n");
	else
		printf("Less than 6 and not 0\n");
	return (0);

}
