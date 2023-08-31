#include "lists.h"

/**
 * This function adds a new node at a given position in a linked list.
 * @param head: A pointer to the first node in the list.
 * @param idx: The position where the new node is to be inserted.
 * @param n: The data to be inserted in the new node.
 * 
 *@return: A pointer to the newly created node, or NULL if unsuccessful. */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
