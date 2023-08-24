#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node - Inserts a new node at the start of a linked list
* @head: Double pointer to the list_t list
* @str: New string to be added in the node
*
* Return: The address of the newly added element, or NULL if operation fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
