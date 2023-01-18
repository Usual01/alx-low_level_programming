#include "function_pointers.h"
/**
 * int_index - finds an integer in an  integer array
 * @array: The array
 * @size: array
 * @cmp:compare pointer
 *Return: a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int miracle;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (miracle = 0; miracle < size; miracle++)
	{
		if (cmp(array[miracle]) != 0)
		return (miracle);
	}
	return (-1);
}
