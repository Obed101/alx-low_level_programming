#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: pointer to the linked list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
