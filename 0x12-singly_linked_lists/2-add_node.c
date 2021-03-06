#include "lists.h"
/**
 * add_node - function to add node
 * @str: string
 * Return: Head new node or NULL if null
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t  *new;
	unsigned int x = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free (new);
		return (NULL);
	}
	new->str = strdup(str);
	while (str[x])
	{
		x++;
	}
	new->len = x;
	new->next = *head;
	*head = new;
	return (*head);
}
