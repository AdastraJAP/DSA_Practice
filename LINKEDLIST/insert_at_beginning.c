#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};


struct Node* createList() {
    struct Node *head = NULL, *newnode, *temp;
    int choice = 1;

    while (choice != 0) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        if (!newnode) {
            printf("Memory allocation failed!\n");
            exit(1);
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {  
            head = temp = newnode;  
        } else {  
            temp->next = newnode;  
            temp = newnode;  
        }

        printf("Press 1 to continue or 0 to stop: ");
        scanf("%d", &choice);
    }

    return head;
}


void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


struct Node* insert_at_beginning(struct Node* head, int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if (!newnode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newnode->data = value;
    newnode->next = head;  
    head = newnode;        
    return head;
}

int main() {
    struct Node* head = NULL;

    head = createList();

    displayList(head);

    int value;
    printf("Enter value to insert at beginning: ");
    scanf("%d", &value);
    head = insert_at_beginning(head, value);

    displayList(head);

    return 0;
}
