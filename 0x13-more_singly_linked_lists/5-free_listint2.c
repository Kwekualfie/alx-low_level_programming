#include "lists.h"
/**
 *This function frees the memory allocated for a linked list.
 * @param head: A pointer to the listint_t list to be deallocated.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
