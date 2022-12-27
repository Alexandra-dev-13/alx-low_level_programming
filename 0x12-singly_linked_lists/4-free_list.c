#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - Entry point
* @head: head of list
* 
* Description: A function that frees a list_t list.
*Return: nothing
*/

void free_list(list_t *head)
{
	list_t *temp;
	
	if (head != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			free(temp);
			head = head->next;
			temp = head;
		}
		free(head);	
	}
}
