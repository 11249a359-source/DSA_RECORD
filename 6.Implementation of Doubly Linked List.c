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
