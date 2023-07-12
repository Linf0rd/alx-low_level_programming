#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int x;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (x = 0; current != NULL && x < index - 1; x++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
