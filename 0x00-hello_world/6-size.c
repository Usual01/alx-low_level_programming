#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise:
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

		printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d);
		return (0);
}
