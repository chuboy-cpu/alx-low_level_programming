#include "lists.h"

/**
 * insert_nodeint_at_index - add nodes to the specified index of a list
 *
 * @head: head
 * @n: element
 * @index: index to put the new node
 * Return: number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *hold, *new_node;

	hold = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (index == 0)
	{
		new_node->next = hold;
		*head = new_node;
		return (*head);
	}
	while (index > 1)
	{
		hold = hold->next;
		index--;
		if (!hold)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = hold->next;
	hold->next = new_node;
	return (new_node);
}
