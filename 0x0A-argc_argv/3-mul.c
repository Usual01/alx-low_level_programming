#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (1);
	}
	printf("%d\n", atoi(argv[1] * argv[2]);
	return (0);
}
