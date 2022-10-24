#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer to the first element
 *
 * Return: the head's node data(int n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (num);
}
