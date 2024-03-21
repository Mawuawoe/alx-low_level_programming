#include "lists.h"
/**
 * get_dnodeint_at_index - function to get node at a pos
 * @head: head of the list
 * @index: pos
 * Return: the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
i = 0;
if (head == NULL)
{
return (NULL);
}
while (head != NULL)
{
if (i == index)
{
break;
}
head = head->next;
i++;
}
return (head);
}
