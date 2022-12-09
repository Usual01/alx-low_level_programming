#include <stdio.h>
/**
 * main - gsarri garri
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			if (a > b)
			{
				putchar(a);
				putchar(b);
				if (a != '7' || a != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
