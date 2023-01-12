#include "main.h"
#include <stdio.h>

/**
 * array_range - creates integer array
 * @min: min number
 * @max: max number
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}

