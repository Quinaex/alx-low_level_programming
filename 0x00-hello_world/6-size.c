#include <stdio.h>
/**
 * main - Prints the size of various types on the computer it is compiled
 * Return: 0 if successful
 */
int main(void)
{

printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long));
printf("size of a long long int: %d byte(s)\n", sizeof(double));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
