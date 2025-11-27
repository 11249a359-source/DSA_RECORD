Aim: To reverse a string using stack. 
Algorithm: 
1. Start 
2. Read string 
3. Push all characters into stack 
4. Pop and print each character 
5. Stop
Program: 
#include <stdio.h> 
#include <string.h> 
#define MAX 100 
char stack[MAX]; 
int top=-1; 
void push(char c){stack[++top]=c;} 
char pop(){return stack[top--];} 
int main(){ 
 char str[100]; 
 scanf("%s",str); 
 for(int i=0;i<strlen(str);i++) push(str[i]); 
 for(int i=0;i<strlen(str);i++) printf("%c",pop()); 
 return 0; 
} 
Output: 
hello 
olleh 
Result: Thus a program that reverses a string using stack is written and executed successfully
