#include "main.h"
#include <stdio.h>

/**
 * swap_int - sugar
 * @a:cblue
 * @b:bblue
 */

void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
