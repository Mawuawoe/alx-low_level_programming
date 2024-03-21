#include "lists.h"
/**
 * dlistint_len - function to print all items in a double linked list
 * @h: the head of the list
 * Return: the number of items in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr;
int num_Nodes = 0;
if(h == NULL)
{
return num_Nodes;
}
while(h->prev != NULL)
{
h = h->prev;
}
ptr = h;
while (ptr != NULL)
{
num_Nodes++;
ptr = ptr->next;
}
return (num_Nodes);
}