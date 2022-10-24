#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head: first element pointer
 * @index: the index of the element
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *current;

	while (head != NULL)
	{
		if (len == index)
		{
			current = head;
			return (current);
		}
		head = head->next;
		len++;
	}
	return (NULL);
}
