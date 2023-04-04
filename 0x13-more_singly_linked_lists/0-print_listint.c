#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: listint_t pointer
 * Return: Return number of nodes
 * Description: a function that prints all the elements of a listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int numberOfNodes = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
}
