#include <stdio.h>
#include <math.h>

/**
 * main - otilo
 * Return: 0
 */

int main(void)
{
	long int a;
	long int c;
	long int b;

	a = 612852475143;
	c = -1;

	while (a % 2 == 0)
	{
		c = 2;
		a /= 2;
	}
	for (b = 3; b <= sqrt(a); b += 2)
	{
		while (a % b == 0)
		{
			c = b;
			a = a / b;
		}
	}
	if (a > 2)
		c = a;
	printf("%ld\n", c);
	return (0);
}
