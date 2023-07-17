#include <stdio.h>

typedef struct {
    Node* next;
    int val;
} Node;

Node *linkedList = NULL;

Node* addNode(int val) {
    Node* newNode = malloc(sizeof(Node));
    newNode->next = linkedList;
    newNode->val = val;

    linkedList = newNode;
    
    return linkedList;
}   

int main(int argc, char** argv) {
    printf("1 -> Add a new node");
    int option = scanf("Select an option to be executed");
    return 0;
}