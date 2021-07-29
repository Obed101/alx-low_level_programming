#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function frees a list
 * @head: pointer to head of list.
 */

void free_list(list_t *head)
{

	if (head == NULL)
		reurn;
	while (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
