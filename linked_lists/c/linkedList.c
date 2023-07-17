#include <stdio.h>

typedef struct {
    void* next;
    int val;
} Node;

/**
 * Add a new node with a value to the front of a linked list
 * ---------------------------------------------------------
 * val: value for the new node to add
 * linkedList: linked list where the new node will be added
 * 
 * returns: 1 if the new node was succesfully added and 0 otherwise
 */
int addNode(int val, Node** linkedList) {
    Node* newNode = malloc(sizeof(Node));

    if (newNode == NULL) return 0;

    Node* head = *linkedList;
    newNode->next = head;
    newNode->val = val;

    *linkedList = newNode;
    
    return 1;
}

/**
 * Remove the node with the value val from a linked list
 * --------------------------------------------------------
 * val: value to be removed from the list
 * linkedList: linked list from where the node will be removed
 * 
 * returns: 1 if the value was removed succesfully from the list and 0 otherwise
*/
int removeNode(int val, Node** linkedList) {
    Node* head = *linkedList; 
    Node* current = head;
    Node* prev = head;

    while (current != NULL) {
        if (current->val == val) {
            if (current == head) {
                head = current->next;
                *linkedList = head;
            } else {
                prev->next = current->next;
                free(current);
                current = NULL;
            }
            
            return 1;
        }

        prev = current;
        current = current->next;
    }
    
    return 0;
}

/**
 * Insert a new node in the linked list given an index
 * ---------------------------------------------------
 * val: value to be inserted
 * index: index where the value must be inserted
 * linkedList: linked list from where the node will be inserted
 * 
 * returns: 1 if the node was succesfully inserted and 0 if the
 * index is out of bound
*/
int insertNode(int val, int index, Node** linkedList) {
    Node* current = *linkedList;

    while (current != NULL) {
        if (index < 0) break;
        if (index == 0) {
            Node* newNode = malloc(sizeof(Node));
            newNode->next = current->next;
            current->next = newNode;

            return 1;
        }
        current = current->next;
        index--;
    }

    return 0;
}