#include "lists.h"

/**
 * add_nodeint - function that add a new node to the begin of a linked list
 * @head: head of the list
 * @n: sting to be added
 * Return: the address of the new node or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    /*create a new node*/
    listint_t * newNode;
    newNode = (listint_t *)malloc(sizeof(listint_t));
    /*malloc can fail so we check if newnode is null*/
    /*anytime malloc fails it returns null*/
    if (newNode == NULL)
    {
        return(NULL);
    }
    /*assigning values*/
    newNode->n = n; /*passing in the given value*/
    if (*head == NULL) /*check if list is empty*/
    {
        newNode->next = NULL;
    }
    else
    {
        /*point the next of the new node to what the head was pointing to */
        newNode->next = *head;
    }
    /*redirrect head to point to new node*/
    *head = newNode;
    return(*head);
}
