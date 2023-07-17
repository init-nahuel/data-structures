#include <stdio.h>

typedef struct {
    void* next;
    int val;
} Node;

/**
 * Add a new node with a value to a linked list
 * --------------------------------------------
 * val: value for the new node to add
 * linkedList: linked list where the new node will be added
 * 
 * returns: The linkedList modified with the new value added
 */
Node* addNode(int val, Node* linkedList) {
    Node* newNode = malloc(sizeof(Node));
    newNode->next = linkedList;
    newNode->val = val;

    linkedList = newNode;
    
    return linkedList;
}