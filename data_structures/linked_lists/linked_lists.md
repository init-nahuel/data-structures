# Linked Lists

This is a common data structure where you have nodes linked between them (insert animation). The usual operations for linked lists are:

- **Add Node**
- **Insert Node**
- **Remove Node**

Here you can see the linked list implementation for different programming languages:

- [C Implementation](./c/linkedList.c) and [interactive use](./c/main.c)

## Add Node

This operation append a new node at the front of the head of the list.

![addNode](../../animations/ds_animations/linked_list/addNode.gif)

As you can see it is possible to insert repetitive values on a linked list without problem.

## Remove Node

This operation removes a node from the list, starts the search from the beggining of the list till found the target node, then removes it and makes the previous node point to the next node were the removed node was pointing.

![removeNode](../../animations/ds_animations/linked_list/removeNode.gif)
