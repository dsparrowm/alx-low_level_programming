#include "lists.h"

/**
 * listint_len - returns the number of nodes in a list
 * @h: head passed as argument
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}
	return (num);
}
