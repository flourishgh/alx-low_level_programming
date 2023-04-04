#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the nodes to free
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *next;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}
