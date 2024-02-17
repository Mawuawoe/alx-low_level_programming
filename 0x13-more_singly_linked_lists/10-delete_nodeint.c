#include"lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given pos
 * @head: the head of the list
 * @index: given pos
 * Return : 1 on successfull -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *temp;
    listint_t *prevNode;
    if (*head == NULL || head == NULL)
    {
        return(-1);
    }
    else
    {
        temp = *head;
        /*traverse the list till the last node*/
        for(i = 1; i<index && temp != NULL && index != 0; i++)
        {
            prevNode = temp;
            temp = temp->next;
        }
        if (temp == NULL)/*if the index you are asking us to delete does not exit*/
        {
            return(-1);
        }
        else if(index == 0)/*deleting the first node*/
        {
            
            *head = temp->next;
            free(temp);
        }
        else
        {
            if (temp->next == NULL)
            {
                prevNode->next = NULL;
            }
            else
            {
                prevNode->next = temp->next;
            }
            /*you exit the loop with Prevnode and temp your current node*/
            /*reassign last but one node to point to the  node after the one to delete*/
            free(temp);
        }
    }
    return(1);
}