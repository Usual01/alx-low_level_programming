#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Positive anything is better than negative nothing
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is positive\n", n);
	else if (n<0)
		printf("%d is negetive\n", n);
	else
		printf("%d is zero\n", 0);
	return (0);
}
