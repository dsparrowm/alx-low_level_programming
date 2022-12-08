#include "lists.h"

/**
 * dlistint_len - function to get the number of elem in a linged list
 * @h: doubly linked list to traverse
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		elem++;
	}
	return (elem);
}
