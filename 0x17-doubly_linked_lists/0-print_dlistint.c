#include "lists.h"

/**
 * print_dlistint - to print all the elements of the
 * dlistint_t list
 *
 * @h: the head of the list
 * Return: the numbers of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int court;

	court = 0;

	if (h == NULL)
		return (court);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		court++;
		h = h->next;
	}

	return (court);
}
