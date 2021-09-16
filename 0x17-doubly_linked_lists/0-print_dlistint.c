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
  if(h != NULL)
    if (sizeof(h) % 4 == 0)
      printf("%d\n", h);
  return (sizeof(h) / 4);
}
