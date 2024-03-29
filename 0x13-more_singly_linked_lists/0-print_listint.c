#include "lists.h"

/**
 * print_listint - prints all element in a singly list
 * @h: head of the list
 * Return: total number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
    int i = 1;
    const listint_t *temp;
    temp = h;
    if (temp == NULL)
    {
        return (0);
    }
    while(temp->next != NULL)
    {
        printf("%d\n", temp->n);
        i ++;
        temp = temp->next;
    }
    printf("%u\n", temp->n);
    return(i);
}