#include "lists.h"
/**
 *add_nodeint - This function inserts a new node at the start of a linked list.
 * @head: A pointer to the head of the list.
 *@n: The data to be stored in the new node.
 *
 *Return: A pointer to the newly created node, or NULL if unsuccessful.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
