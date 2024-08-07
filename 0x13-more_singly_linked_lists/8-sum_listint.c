#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of
 * a linked list
 * @head: pointer to the header of the list
 * Return: sum or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
