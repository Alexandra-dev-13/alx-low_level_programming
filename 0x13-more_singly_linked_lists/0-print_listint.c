#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - Enrty point
* @h: head of the list
* Description: a function that prints all the elements of a listint_t list.
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *temp;

	if (h == NULL)
	{
		return (size);
	}
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		size++;
	}
	return (size);
}
