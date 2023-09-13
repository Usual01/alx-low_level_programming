#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the LSA
 * @array: pointer to a first element in an array of int.
 * @size: size of the array
 * @value: value to search in the array
 * Return: -1 or the index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);
	a = 0;
	while (a < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] != value)
		{
			a++;
		}
		else
			break;
	}
	if (a < size)
		return (a);
	else
		return (-1);
}
