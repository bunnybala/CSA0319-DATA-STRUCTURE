#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
}*root=NULL,*newnode;

struct node *insert(struct node *root, int ele) {
    if (root == NULL) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = ele;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    } else if (ele > root->data) {
        root->right = insert(root->right, ele);
    } else {
        root->left = insert(root->left, ele);  
    }
    return root;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}

int main() {
    int cho, ele;
    while (1) {
        printf("Main menu\n");
        printf("1. Insert\n 2. Inorder\n 3. Preorder\n 4. Postorder\n 5. Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &cho);

        switch (cho) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &ele);
                root = insert(root, ele);
                break;
            case 2:inorder(root);break;
            case 3:preorder(root);break;
            case 4:postorder(root);break;
            case 5:exit(0);  
            default:
                printf(" Enter 1 to 5\n");
        }
    }
    return 0;
}

