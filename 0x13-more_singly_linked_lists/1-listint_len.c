#include "lists.h"

/**
* listint_len - Entry point
* @h: head of the list
* Description:  a function that returns the number of elements in a list.
*Return: numbers of nodes
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t size = 0;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
