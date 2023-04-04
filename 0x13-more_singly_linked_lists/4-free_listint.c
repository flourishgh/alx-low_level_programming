#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: the nodes to free
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
