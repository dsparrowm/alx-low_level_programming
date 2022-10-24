#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: head of the list passed as argument
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	};
	return (num);
}
