#include "lists.h"
/**
 * add_dnodeint - function to add node to an empty list from begining
 * @head: head of the list
 * @n: value to add to the list
 * Return: the new node added
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->prev = NULL;
new->n = n;
h = *head;
new->next = h;
if (h != NULL)
{
h->prev = new;
}
*head = new; /*when list is empty*/
return (new);
}
