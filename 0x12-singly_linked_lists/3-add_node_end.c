#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*add_node_end - Entry point.
*@head: head of list
*@str: data that content list
*
*Description: A function that adds a new node at the end of a list_t list.
*Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t *));
	list_t *temp;

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = node;

	return (node);
}
