#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *
 * @head: points to first node
 * @index: the index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node); /* delete */
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node); /* delete */
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
