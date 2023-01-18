#include "function_pointers.h"
/**
 * print_name - function prints nams
 * @name: namd
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name)
}
