Aim:To implement a singly linked list. 
Algorithm: 
1. start 
2. Create nodes dynamically 
3. Link them sequentially 
4. Traverse to display elements 
5. Stop
Program: 
#include <stdio.h>
#include <stdlib.h>
struct node {
  int value;
  struct node *next;
};
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
}

int main() {
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));
  one->value = 1;
  two->value = 2;
  three->value = 3;
  one->next = two;
  two->next = three;
  three->next = NULL;
  head = one;
  printLinkedlist(head);
}

Output: 
1 2 3  
Result : Thus the program that implementation of singly linked list is written and executed successfully

6.Implementation of Doubly Linked List




Aim: To implement a doubly linked list. 
Algorithm: 
1. Start 
2. Create doubly linked nodes 
3. Connect prev and next pointers 
4. Traverse forward to display 
5. Stop
Program: 
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev, *next;
};
int main() {
    struct node *head = NULL, *temp, *newnode;
    for (int i = 0; i < 3; i++) {
        newnode = (struct node*) malloc(sizeof(struct node));
        scanf("%d", &newnode->data);  
        newnode->next = NULL;   
        if (head == NULL) {
            newnode->prev = NULL;
            head = temp = newnode;
        } 
        else {
            newnode->prev = temp;
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
Output: 
0 0 0
Result: Thus a program that implements a doubly linked list is written and executed successfully
7.Perform Traversal on a Binary Search Tree




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



8.Implementation of graph search algorithms




Aim: To perform BFS and DFS traversal on a graph 
Algorithm: 
1. Start 
2. Input adjacency matrix 
3. Use queue for BFS, recursion for DFS 
4. Stop
Program: 
#include <stdio.h> 
int n,a[10][10],visited[10]; 
void dfs(int v){int i;visited[v]=1;printf("%d 
",v);for(i=0;i<n;i++)if(a[v][i]&&!visited[i])dfs(i);} 
void bfs(int v){ 
 int q[10],f=0,r=-1,i; 
 visited[v]=1; q[++r]=v; 
 while(f<=r){ 
 v=q[f++]; printf("%d ",v); 
 for(i=0;i<n;i++) if(a[v][i]&&!visited[i]){q[++r]=i;visited[i]=1;}  } 
} 
int main(){ 
 scanf("%d",&n); 
 for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);  for(int i=0;i<n;i++)visited[i]=0; 
 dfs(0);
 printf("\n"); 
 for(int i=0;i<n;i++)visited[i]=0; 
 bfs(0); 
 return 0; 
} 
Output: 
0 1 1 0 
1 0 1 1 
1 1 0 0 
0 1 0 0 
0 1 2 3 
0 1 2 3 
Result: Thus, a program that performs BFS and DFS traversal on a graph is written and executed successfully
