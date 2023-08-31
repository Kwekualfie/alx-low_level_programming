#include "lists.h"

/**
 *print_listint - this function displays all elements in a linked list.
 *@param h: The linked list of type listint_t to be displayed.
 *
 *@return: The total number of nodes in the linked list.
*/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
