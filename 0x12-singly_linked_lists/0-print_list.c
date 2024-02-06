#include "lists.h"

/**
 * print_list - prints all element in a singly list
 * @h: head of the list
 * Return: total number of nodes in the list
 */

size_t print_list(const list_t *h)
{
    int i = 1;
    if (h == NULL)
    {
        return(0);
    }
    while(h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[%u] %s\n", h->len, "(nill)");
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);
        }

        i ++;
        h = h->next;
    }

    return(i);
}