#include "lists.h"

/**
 *
 * free_list - Write a function that frees a list_t
 * head: pointer 
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
