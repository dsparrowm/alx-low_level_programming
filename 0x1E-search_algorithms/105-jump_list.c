#include "search_algos.h"

/**
 * jump_list - Searching for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the linked list
 * @size: size of the linked list
 * @value: The value to search
 *
 * Return: value
 *
 * Description: Prints a value every time it is compared in the list.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t leap, leap_size;
	listint_t *node, *move;

	if (list == NULL || size == 0)
		return (NULL);

	leap = 0;
	leap_size = sqrt(size);
	for (node = move = list; move->index + 1 < size && move->n < value;)
	{
		node = move;
		for (leap += leap_size; move->index < leap; move = move->next)
		{
			if (move->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", move->index, move->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, move->index);

	for (; node->index < move->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
