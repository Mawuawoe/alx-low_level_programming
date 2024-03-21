#include "lists.h"
/**
 * free_dlistint - function to print all items in a double linked list
 * @head: the head of the list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}
