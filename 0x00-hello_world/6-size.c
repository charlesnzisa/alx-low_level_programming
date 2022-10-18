#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 *
 * Return: 0
 * code by Charles Nzisa
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(e));
	return (0);
}
