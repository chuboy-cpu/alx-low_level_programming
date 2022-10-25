#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified index from list
 * @head: A pointer to listint_t structure
 * @index: The index of the node to delete
 * Return: 1 if succeeded, or -1 if it failed
 * temp-hold, dnode-new_node, i-Bello.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold, *new_node;
	unsigned int Bello = 1;

	if (*head == NULL)
		return (-1);

	hold = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
	}
	else
	{
		while (Bello < index)
		{
			hold = hold->next;
			if (hold == NULL)
				return (-1);
			Bello++;
		}
		new_node = hold;
		new_node = new_node->next;
		hold->next = new_node->next;
		free(new_node);
	}
	return (1);
}