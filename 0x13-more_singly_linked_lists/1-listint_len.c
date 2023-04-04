#include "lists.h"
/**
 * listint_len - a function that returns the number of elements.
 * @h: The pointer
 * Return: The length of the linked list
 * Description: a function that returns the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = (listint_t *) malloc(sizeof(listint_t));
	int i = 0;

	tmp = h;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
