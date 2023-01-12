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
	int i, *array, size;

	if (min > max)
		return (NULL);
	size = (max - min);
	array = malloc((size + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}

