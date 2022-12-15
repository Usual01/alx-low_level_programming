#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	for (a = 1; i <= 100; i++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (a == 1)
		{
			printf("%d", a)
		}
		else
		{
			printf(" %d", a)
		}
	}
	printf("\n");
	return (0);
}
