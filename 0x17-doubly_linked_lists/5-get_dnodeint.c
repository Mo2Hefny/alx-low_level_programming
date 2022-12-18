#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 * Return: index of the node, NULL if the node doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

current = head;
i = 0;
while (current != NULL)
{
if (i == index)
return (current);
current = current->next;
i++;
}
return (NULL);
}
