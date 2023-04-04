#include "lists.h"
size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts unique nodes
 * @head: pointer
 * Return: size_t
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *ttt, *hhh;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ttt = head->next;
	hhh = (head->next)->next;

	while (hhh)
	{
		if (ttt == hhh)
		{
			ttt = head;
			while (ttt != hhh)
			{
				nodes++;
				ttt = ttt->next;
				hhh = hhh->next;
			}

			ttt = ttt->next;
			while (ttt != hhh)
			{
				nodes++;
				ttt = ttt->next;
			}

			return (nodes);
		}

		ttt = ttt->next;
		hhh = (hhh->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
