#include "search_algos.h"


/**
 * linear_skip - searches for a value conatined in a skip list
 *
 * @list: pointer to the head of the skip list
 * @value: value to search
 * Return: pointer on the first node where value is
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *fold = NULL, *end = NULL;

	if (!list)
		return (NULL);

	fold = list;
	while (fold && fold->express &&fold->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       fold->express->index, fold->express->n);
		fold = fold->express;
	}
	end = fold;
	while (end && end->next != end->express)
		end = end->next;
	/* value potentially lies between two express nodes */
	if (fold->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       fold->express->index, fold->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       fold->index, fold->express->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       fold->index, stop->index);

	while (fold != end && fold->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       fold->index, fold->n);
		fold = fold->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       fold->index, fold->n);

	if (fold == end)
		return (NULL);
	return (fold);
}
