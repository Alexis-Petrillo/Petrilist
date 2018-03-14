#include "list.h"

int removeHead(t_list *list)
{
    if (list == NULL)
        return (1);

    if (list->first != NULL) {
        t_node *nodeToDelete = list->first;
        list->first = list->first->next;
        list->nbNodes--;
        free(nodeToDelete);
    }

    return (0);
}

int removeTail(t_list *list)
{
    if (list == NULL)
        return (1);

    t_node *currentNode = list->first;

    while (currentNode->next != NULL) {
        if (currentNode->next->next == NULL) {
            t_node *nodeToDelete = currentNode->next;
            currentNode->next = NULL;
            list->nbNodes--;
            free(nodeToDelete);
        }
        else
            currentNode = currentNode->next;
    }

    return (0);
}

int removeNode(t_list *list, t_node *address)
{
    if (list == NULL || address == NULL)
        return (1);

    t_node *currentNode = list->first;

    if (currentNode == address) {
        t_node *nodeToDelete = currentNode;
        list->first = currentNode->next;
        list->nbNodes--;
        free(nodeToDelete);
    }

    while (currentNode != NULL) {
        if (currentNode->next == address) {
            t_node *nodeToDelete = currentNode->next;
            currentNode->next = currentNode->next->next;
            list->nbNodes--;
            free(nodeToDelete);
        }
        currentNode = currentNode->next;
    }

    return (0);
}