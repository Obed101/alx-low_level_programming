#include "stddef.h"
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - a function that prints the number of elements in a list
 *
 * @h: The list
 * Return: Number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
  int size = 0;
  while(h != 0)
    {
      ++size;
      printf("%d\n", h->n);
      h = h->next;
    }
  return (size);
}
