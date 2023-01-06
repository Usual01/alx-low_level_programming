#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: arguments count
 * @argv:argument vector
 * Return: 0
 */

int main(char argv __attribute__((unused)),int argc)
{
	printf("%d\n", argc - 1);
	return (0);
}
