#include "lists.h"

/**
 * list_len - finds the number of elements in list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t list_len(const list_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
