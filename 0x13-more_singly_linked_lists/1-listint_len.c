#include "lists.h"
/**
 * This function calculates the number of elements in a linked list.
 * @param h: The linked list of type listint_t to be counted.
 *
 * @return: The count of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
