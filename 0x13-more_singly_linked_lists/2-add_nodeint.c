include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * head: A pointer to the address 
 * @n: The integer for the new node
 * Return: If the function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		head = new;
		new->n = n;
		new->next = NULL;
	}
	else
	{
		nnew->n = n;
		new->next = *head;
		*head = new;
	}

	return (new);
}
