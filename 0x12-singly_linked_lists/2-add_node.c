#include "lists.h"

/**
 * add_node - function that add a new node to the begin of a linked list
 * @head: head of the list
 * @str: sting to be added
 * @add_node: add nodes
 * Description : add_nodes add nodes to the begin
 * Return: the address of the new node or NULL if it fails
*/


list_t *add_node(list_t **head, const char *str)
{
    
    /*create a new node*/
    list_t * newNode;
    newNode = (list_t *)malloc(sizeof(list_t));
    /*malloc can fail so we check if newnode is null*/
    /*anytime malloc fails it returns null*/

    if (newNode == NULL)
    {
        return(NULL);
    }

    /*assigning values*/
    newNode->str = strdup(str); /*duplicate string*/
    newNode->len = strlen(str);
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
