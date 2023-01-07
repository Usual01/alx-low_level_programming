#include <stdio.h>
#include <stdlib.h>

/**
 * main - print ur change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, ncoins;

	ncoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		ncoins++;
		if ((cents - 25) >= 0)
			cents -= 25;
		else if ((cents - 10) >= 0)
			cents -= 10;
		else if ((cents - 5) >= 0)
			cents -= 5;
		else if ((cents - 2) >= 0)
			cents -= 2;
		else if ((cents >= 1) >= 0)
			cents -= 1;
		cent--;
	}
	printf("%d\n", ncoins);
	return (0);
}

}
