#include "lists.h"
/**
 * insert_dnodeint_at_index - function to get node at a pos
 * @h: head of the list
 * @idx: pos
 * @n: data to insert
 * Return: the node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_Node;
dlistint_t *temp;
dlistint_t *temp2;
unsigned int i;
new_Node = NULL;
if (idx == 0)
new_Node = add_dnodeint(h, n);
else
{
temp = *h;
i = 0;
while (temp != NULL)
{
if (i == idx - 1)
{
break;
}
temp = temp->next;
i++;
}
if (temp->next == NULL)
{
new_Node = add_dnodeint_end(h, n);
}
else
{
new_Node = malloc(sizeof(dlistint_t));
if (new_Node != NULL)
{
new_Node->n = n;
temp2 = temp->next;
temp->next = new_Node;
temp2->prev = new_Node;
new_Node->next = temp2;
new_Node->prev = temp;
}
}
}
return (new_Node);
}
