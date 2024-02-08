#include "lists.h"

/**
 * sum_listint - sum up all the data in a singly list
 * @head: head pointing to the first list
 * Return: sum of all the data in the linked list
*/

int sum_listint(listint_t *head)
{
    int sum;
    listint_t *temp;
    sum = 0; 
    temp = head;
    if (temp == NULL)
    {
        return (0);
    }
    while(temp != NULL)
    {
        sum = sum + temp->n;
        temp = temp->next;
    }
    return(sum);
}