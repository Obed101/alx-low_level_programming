#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fn, *hare;

	fn = sn = head;
	while (fn && sn && sn->next)
	{
		fn = sn->next;
		sn = sn->next->next;
		if (fn == sn)
		{
			fn = head;
			break;
		}
	}
	if (!fn || !sn || !sn->next)
		return (NULL);
	while (fn != hare)
	{
		fn = fn->next;
		fn = sn->next;
	}
	return (sn);
}
