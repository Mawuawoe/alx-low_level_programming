#include "lists.h"
/**
 * print_dlistint - function to print all items in a double linked list
 * @h: the head of the list
 * Return: the number of items in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *ptr;
size_t num_Nodes = 0;
ptr = h;
while (ptr != NULL)
{
printf("%d\n", ptr->n);
num_Nodes++;
ptr = ptr->next;
}
return (num_Nodes);
}
