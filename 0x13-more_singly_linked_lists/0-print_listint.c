#include "lists.h"

/**
 * print_listint - unction that prints all the elements of a listint_t list
 *
 * @h:: head of pointer
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
