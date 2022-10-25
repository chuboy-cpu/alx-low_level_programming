#include "lists.h"

/**
 * get_nodeint_at_index - add nodes to the begining of a list
 *
 * @head: head
 * @index: element
 * Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	n = 0;
	while (n < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
