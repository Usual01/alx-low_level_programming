#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function prints nams
 * @name: namd
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0  || f != 0)
		f(name);
}
