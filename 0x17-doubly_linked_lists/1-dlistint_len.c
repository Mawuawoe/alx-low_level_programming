#include "lists.h"
/**
 * dlistint_len - function to print all items in a double linked list
 * @h: the head of the list
 * Return: the number of items in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr;
size_t num_Nodes = 0;
ptr = h;
if(h == NULL)
{
return num_Nodes;
}
while(h->prev != NULL)
{
h = h->prev;
}
while (ptr != NULL)
{
num_Nodes++;
ptr = ptr->next;
}
return (num_Nodes);
}