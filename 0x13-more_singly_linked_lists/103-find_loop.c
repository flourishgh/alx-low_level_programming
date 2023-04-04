#include "lists.h"
/**
 * find_listint_loop - Finds the loops
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ttt, *hhh;

	if (head == NULL || head->next == NULL)
		return (NULL);

	ttt = head->next;
	hhh = (head->next)->next;

	while (hhh)
	{
		if (ttt == hhh)
		{
			ttt = head;

			while (ttt != hhh)
			{
				ttt = ttt->next;
				hhh = hhh->next;
			}

			return (ttt);
		}

		ttt = ttt->next;
		hhh = (hhh->next)->next;
	}

	return (NULL);
}
