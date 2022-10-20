#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: pointer to the first node
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
