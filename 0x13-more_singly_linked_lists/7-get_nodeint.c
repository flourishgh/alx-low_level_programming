#include "lists.h"
/**
 * get_nodeint_at_index - Return node at 9th Position
 * @head: A pointer to the head of the listint_t list.
 * @index: The index 
 * Return: NULL OR NODE
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);s
}
