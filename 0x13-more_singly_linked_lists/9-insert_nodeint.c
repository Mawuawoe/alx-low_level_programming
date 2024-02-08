#include"lists.h"
/**
 * insert_nodeint_at_index - a function that insert data at a given point
 * @head: pointer to the first element
 * @idx: the position to place the new node
 * @n: the data of the new node to be added
 * Return: the address of the new node 
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    /*create a new node*/
    listint_t * newNode;
    listint_t *temp;
    newNode = (listint_t *)malloc(sizeof(listint_t));
    /*malloc can fail so we check if newnode is null*/
    /*anytime malloc fails it returns null*/

    if (newNode == NULL)
    {
        return(NULL);
    }

    newNode->n = n;
    if(head == NULL)/*if the head itself is NULL*/
    {
        return(NULL);
    }
    if (*head == NULL) /*check if list is empty*/
    {
        newNode->next = NULL;
        /*redirrect head to point to new node*/
        *head = newNode;
        return(newNode);
    }
    else
    {
        temp = *head;
        /*traversing the linked list and insert after a position pos*/
        for(i = 1; i<idx && idx != 0 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if(temp == NULL)
        {
            return(NULL);
        }
        else if (idx == 0)
        {
            newNode->next = temp;
            *head = newNode;
        }
        else
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    return(newNode);
}