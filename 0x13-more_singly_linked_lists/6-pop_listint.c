#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * @head: A pointer 
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
