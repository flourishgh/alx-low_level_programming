#include "lists.h"
/**
 * sum_listint - Calculates the sum of all the
 *               values in the linked list
 * @head: A pointer to the head of the listint_t list.
 * Return: If the list is empty - 0 || the sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
