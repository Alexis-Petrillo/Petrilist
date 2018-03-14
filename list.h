#ifndef LIST_H
  #define LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node t_node;
struct s_node
{
  int number;
  t_node *next;
};

typedef struct s_list
{
  t_node *first;
  int nbNodes;
} t_list;

t_list *initialisation(int value);
int addToHead(t_list *list, int value);
int addToTail(t_list *list, int value);
int addAfterNode(t_list *list, t_node *address, int value);
int removeHead(t_list *list);
int removeTail(t_list *list);
int removeNode(t_list *list, t_node *address);
void *findNode(t_list *list, int value);
int freeList(t_list *list);
int displayList(t_list *list);

#endif