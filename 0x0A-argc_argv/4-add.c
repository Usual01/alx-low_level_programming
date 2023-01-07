#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive numbers
 *@argc: argument count
 *@argv:argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		if (argv[a][b] < '0' || argv[a][b] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}

