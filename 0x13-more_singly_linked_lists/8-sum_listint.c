#include "lists.h"

/**
 *sum_listint - sums up all the data in a linked list
 *@head: head of the list
 *Return: sum of the number
 */

int sum_listint(listint_t *head)
{
listint_t *element = head;
size_t sum = 0;

while (element != NULL)
{
sum += element->n;
element = element->next;
}
return (sum);
}
