#include "list.h"
#include <stdio.h>

/**
 * print_list - print all the elements
 * @h: pointer
 * Return: the number
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		length++;
		h = h->next;
	}
	return (length);
}
