#include <stdio.h>
#include <stdlib.h> 

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;  

void create_SLL() {
    int n, i, ele;
    printf("Enter the size: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &ele);

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = ele;  
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            struct node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}

void display_SLL() {
    if (head == NULL) {
        printf("The SLL is empty\n");
    } else {
        struct node *temp = head;
        while (temp != NULL) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");  
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Create\n2. Display\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_SLL();
                break;
            case 2:
                display_SLL();
                break;
            case 3:
                exit(0);  
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}