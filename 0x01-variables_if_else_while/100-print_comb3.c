#include <stdio.h>
/**
 * main - gsarri garri
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; c <= 7; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(c);
					if (a != 7 && a != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
