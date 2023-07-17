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
    printf("NULL\n");
    
    return;
}

int main(int argc, char** argv) {
    Node* myList = NULL;

    int option = -1;
    while (option != 5) {
        printMenu();
        int recvOption = scanf("%d", &option);
        if (recvOption == 1 && option > 0 && option <= 5) {
            switch (option) {
            case 1:
                printf("Give a value to insert:\n");
                scanf("%d", &option);
                int addStatus = addNode(option, &myList);
                break;
            case 2:
                printf("Wich value do you want to remove?:\n");
                scanf("%d", &option);
                int removeStatus = removeNode(option, &myList);
                if (!removeStatus) {
                    printf("Element not found!\n");
                }
                break;
            case 3:
                printf("Which value do you want to insert?:\n");
                scanf("%d", &option);
                printf("Where do you want to insert it?:\n");
                int index = 0;
                scanf("%d", &index);
                int insertStatus = insertNode(option, index, &myList);
                if (!insertStatus) {
                    printf("Index out of bound!\n");
                }
                break;
            case 4:
                printList(myList);
                break;
            case 5:
                break;
            }
        }
    }
    return 0;
}