#include "lists.h"

/**
 * print_list - prints all element in a singly list
 * @h: head of the list
 * Return: total number of nodes in the list
 */

size_t print_list(const list_t *h)
{
    int i = 1;
    const list_t *temp;
    temp = h;
    if (temp == NULL)
    {
        return(0);
    }
    while(temp->next != NULL)
    {
        if (temp->str == NULL)
        {
            printf("[%u] %s\n", temp->len, "(nill)");
        }
        else
        {
            printf("[%u] %s\n", temp->len, temp->str);
        }

        i ++;
        temp = temp->next;
    }
    printf("[%u] %s\n", temp->len, temp->str);

    return(i);
}