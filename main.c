#include "list.h"

int main(int argc, char **argv)
{
    t_list *list = initialisation(0);

    addToHead(list, 1);
    addToTail(list, -1);
    addToHead(list, 2);
    addToTail(list, -2);
    removeNode(list, findNode(list, 2));
    displayList(list);
    freeList(list);
    return (0);
}
