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
	int a, b, sum;

	sum = 0;
	if (argc < 1)
		printf("%\n", 0);

	while (argc-- && argc > 0)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		b = atoi(argv[argc]);
		sum += b
	}
	printf("%d\n", sum)
	return (0);
}
