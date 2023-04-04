#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer
 * Return: size_t
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ttt, *hhh;
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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
