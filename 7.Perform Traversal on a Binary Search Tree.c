Aim: To create and traverse a Binary Search Tree. 
Algorithm: 
1. Start 
2. Insert elements following BST rule 
Perform inorder traversal 
3. Stop
Program: 
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};
struct node* create(int value) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* insert(struct node* root, int value) {
    if (root == NULL) return create(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}
void inorder(struct node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(struct node* root) {
    if (root) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
int main() {
    struct node* root = NULL;
    root = insert(root, 40);
    insert(root, 20);
    insert(root, 60);
    insert(root, 10);
    insert(root, 30);
    printf("Inorder  : ");
    inorder(root);
    printf("\nPreorder : ");
    preorder(root);
    printf("\nPostorder: ");
    postorder(root);
    return 0;
}


Output: 
Inorder traversal: 1 -> 3 -> 4 -> 6 -> 7 -> 8 -> 10 -> 14 -> 
After deleting 10
Inorder traversal: 1 -> 3 -> 4 -> 6 -> 7 -> 8 -> 14 -> 

Result: Thus , a program that performs creation and traversion in a Binary Search Tree is written and executed successfully
