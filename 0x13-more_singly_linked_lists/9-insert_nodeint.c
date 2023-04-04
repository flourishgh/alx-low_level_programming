#include "lists.h"

/**
 * insert_nodeint_at_index - new node to index
 * @head: A pointer to the address
 * @idx: index
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *c = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = c;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (c == NULL || c->next == NULL)
			return (NULL);

		c = c->next;
	}

	new->next = c->next;
	c->next = new;

	return (new);
}
