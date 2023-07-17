#include <stdio.h>

typedef struct {
    void* next;
    int val;
} Node;

/**
 * Add a new node with a value to the front of a linked list
 * ---------------------------------------------------------
 * val: value for the new node to add
 * head: linked list where the new node will be added
 * 
 * returns: The linkedList modified with the new value added
 */
Node* addNode(int val, Node* head) {
    Node* newNode = malloc(sizeof(Node));
    newNode->next = head;
    newNode->val = val;

    head = newNode;
    
    return head;
}

/**
 * Remove the node with the value val from a linked list
 * --------------------------------------------------------
 * val: value to be removed from the list
 * head: linked list from where the node will be removed
 * 
 * returns: 0 if the value was removed from the ll and 1 if was not found
*/
int removeNode(int val, Node** linkedList) {
    Node* head = *linkedList; 
    Node* current = head;
    Node* prev = head;

    while (current != NULL) {
        if (current->val == val) {
            if (current == head) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            
            free(current);
            current = NULL;
            return 1;
        }

        prev = current;
        current = current->next;
    }
    
    return 0;
}