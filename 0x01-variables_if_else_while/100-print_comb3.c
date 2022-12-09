#include <stdio.h>
/**
 * main - gsarri garri
 *
 * Return: 0
 */
int main(void)
{
	int a, b = '0', c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '8'; b++)
		{
			for (c = b; c <= '7'; c++)
			{
				if (a != c)
				{
					putchar(a);
					putchar(b);
				}
				if (a == c)
				{
					continue
				}
				if (a != '8' && b != '9')
				{
					break;
				}
				else
				{
					putchar(a);
					putchar(b);
				}

			}
			b++;
		}
	}
	putchar('\n');
	return (0);
}
