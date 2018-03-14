#include "list.h"

int addToHead(t_list *list, int value)
{
    t_node *newNode = malloc(sizeof(t_node));

    if (list == NULL || newNode == NULL)
        return (1);

    newNode->number = value;

    newNode->next = list->first;
    list->first = newNode;
    list->nbNodes++;
    
    return (0);
}

int addToTail(t_list *list, int value)
{
    t_node *newNode = malloc(sizeof(t_node));

    if (list == NULL || newNode == NULL)
        return (1);

    newNode->number = value;

    t_node *currentNode = list->first;

    while (currentNode != NULL) {
        if (currentNode->next == NULL) {
            newNode->next = NULL;
            currentNode->next = newNode;
            list->nbNodes++;
            currentNode = NULL;
        }
        else
            currentNode = currentNode->next;
    }

    return (0);
}

int addAfterNode(t_list *list, t_node *address, int value)
{
    t_node *newNode = malloc(sizeof(t_node));

    if (list == NULL || newNode == NULL)
        return (1);

    newNode->number = value;

    t_node *currentNode = list->first;

    while (currentNode != NULL) {
        if (currentNode == address) {
            newNode->next = currentNode->next;
            currentNode->next = newNode;
            list->nbNodes++;
            currentNode = NULL;
        }
        else
            currentNode = currentNode->next;
    }

    return (0);
}