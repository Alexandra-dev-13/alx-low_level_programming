#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*add_node - entry point
*@head: head of the list
*@str: data that to be added to list
*
*Description:  a function that adds a new node at the beginning of a list_t
*Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t *));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (*head);

}
