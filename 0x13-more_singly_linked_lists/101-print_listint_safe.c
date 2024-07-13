#include "lists.h"

/**
 * free_listd - frees a linked list
 * @head: head of the list
 * Return: no return
 */

void free_listd(listd_t **head)
{
	listd_t *temp;
	listd_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}

		*head = NULL;
	}
}


/**
 * print_listint_safe - prints a list with a loop
 * @head: pointer to the header of a list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listd_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listd_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listd(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listd(&hptr);
	return (nnodes);
}
