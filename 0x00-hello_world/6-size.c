#include <stdio.h>
/**
 * main - Prints the size of various types on the computer it is compiled
 * Return: 0 if successful
 */
int main(void)
{
	char c;
	int d;
	long int l;
	long long int e;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
