#include "lists.h"
/**
 * add_nodeint_end - Add new node at the end
 * @head: the node
 * @n: the node int value;
 * Return: the address of th new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	listint_t *tt = *head;

	if (tmp == NULL)
		return (NULL);
	
	tmp->n = n;
	tmp->next = NULL;
	
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (tt->next != NULL)
	{
		tt = tt->next;
	}
	tt->next = tmp;
	return (tmp);
}
