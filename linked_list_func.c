#include "list.h"

t_list *initialisation(int value)
{
    t_list *list = malloc(sizeof(t_list));
    t_node *node = malloc(sizeof(t_node));

    if (list == NULL || node == NULL)
        exit(EXIT_FAILURE);

    node->number = value;
    node->next = NULL;
    list->first = node;
    list->nbNodes = 1;

    return (list);
}

void *findNode(t_list *list, int value)
{
    if (list == NULL)
        exit(EXIT_FAILURE);

    t_node *currentNode = list->first;

    while (currentNode != NULL){
        if (currentNode->number == value)
            return (currentNode);
        currentNode = currentNode->next;
    }

    return NULL;
}

int displayList(t_list *list)
{
    if (list == NULL)
        return (1);

    t_node *currentNode = list->first;

    while (currentNode != NULL) {
        printf("%d -> ", currentNode->number);
        currentNode = currentNode->next;
    }

    printf("NULL\n");
    printf("Number of nodes : %d\n", list->nbNodes);

    return (0);
}

int freeList(t_list *list)
{
    if (list == NULL)
        return (1);
  
    while (list->first != NULL) {
        t_node *nodeToDelete = list->first;
        list->first = list->first->next;
        free(nodeToDelete);
    }

    return (0);
}