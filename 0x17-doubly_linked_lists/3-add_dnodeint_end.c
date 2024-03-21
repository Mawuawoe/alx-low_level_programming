#include "lists.h"
/**
 * add_dnodeint_end - function to add node to an empty list from begining
 * @head: head of the list
 * @n: value to add to the list
 * Return: the new node added
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *h;
temp = malloc(sizeof(dlistint_t));
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
h = *head;
if (h != NULL)
{
while (h->next != NULL)
{
h = h->next;
}
h->next = temp;
}
else
{
*head = temp;
}
temp->prev = h;
return (temp);
}
