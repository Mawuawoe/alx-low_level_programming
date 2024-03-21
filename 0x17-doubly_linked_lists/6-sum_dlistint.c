#include "lists.h"
/**
 * sum_dlistint - function to sum all items of the list
 * @head: the head of the list
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum;
if (head == NULL)
{
return (0);
}
sum = 0;
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
