# Lib-liste

Simple functions to understand linked lists in C

## Getting Started

### Install

Compile with

```
$ gcc *.c
``` 

## Run

Run with
```
$ ./a.out
``` 

## Functions

### Adding nodes
  - Insert at the beginning
    ```
    addToHead(list, 1);
    ``` 
  - Insert at the end
    ```
    addToTail(list, 1);
    ``` 
 - Insert after a node
    ```
    addAfterNode(list, findNode(list, 1), 2);
    ``` 
### Removing nodes
 - Remove the first node
    ```
    removeHead(list);
    ``` 
 - Remove the last node
    ```
    removeTail(list)
    ```
 - Remove a node
    ```
    removeNode(list, findNode(list, 1));
    ``` 
### Other
 - Display the linked list
    ```
    display(list);
    ``` 
 - Free the linker list
    ```
    freeList(list);
    ```
 - Get the address of à node
    ```
    findNode(list, 1);
    ``` 
