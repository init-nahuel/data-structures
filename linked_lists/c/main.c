#include <stdio.h>
#include <stdlib.h>

#include "linkedList.c"

void printMenu() {
    printf("Select an option to operate an empty linked list:\n");
    printf("\t1. Add a node to the list.\n");
    printf("\t2. Remove a node from the list.\n");
    printf("\t3. Insert a node to the list.\n");
    printf("\t4. Print your list.\n");
    printf("\t5. Quit.\n");
    
    return;
}

void printList(Node* linkedList) {
    while (linkedList != NULL) {
        printf("%d->", linkedList->val);
        linkedList = linkedList->next;
    }
    printf("\n");
    
    return;
}

int main(int argc, char** argv) {

    int option = -1;
    while (option != 5) {
        printMenu();
        int recvOption = scanf("%d", &option);
        if (recvOption == 1 && option > 0 && option <= 5) {
            switch (option) {
            case 1:
                /* code */
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            default:
                break;
            }
        }
    }
    Node* myList = NULL;
    myList = addNode(3, myList);
    return 0;
}