#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: pointer to pointer of the first element
 * @n: data to create new node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
