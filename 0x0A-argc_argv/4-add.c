#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum)
		return (0);
}
