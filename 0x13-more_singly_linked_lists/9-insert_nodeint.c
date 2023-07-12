#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint_end(head, n));

	current = *head;
	for (x = 0; x < idx - 1 && current != NULL; x++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}




