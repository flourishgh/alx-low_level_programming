#include "lists.h"
/**
 * add_nodeint -  a function that adds a new node
 * @head: The head of the node
 * @n: the number to add
 * Return: The address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
