#include "function_pointers.h"
/**
 * array_iterator - Executes a functions while counting its index
 * @array: array
 * @size: array size
 * @action: executable pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
