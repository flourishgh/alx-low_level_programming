#include "lists.h"
/**
 * delete_nodeint_at_index - index deleting
 * @head: A pointer
 * @index: The index of the node to be deleted
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *c = *head;
	unsigned int node;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (c->next == NULL)
			return (-1);

		c = c->next;
	}

	tmp = c->next;
	c->next = tmp->next;
	free(tmp);
	return (1);
}
