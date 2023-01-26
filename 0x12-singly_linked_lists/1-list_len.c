#include "lists.h"

/**
 * list_len - return  number node
 * @h: head
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != 0)
	{
		length++;
		h = h->next;
	}
	return (length);
}
