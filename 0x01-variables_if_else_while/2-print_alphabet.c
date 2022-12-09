#include <stdio.h>

/**
 * main - prints the lower alphabet letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
