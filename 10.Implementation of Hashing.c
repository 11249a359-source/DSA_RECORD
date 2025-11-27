Aim: To implement hashing using linear probing. 
Algorithm: 
1. Start 
2. Initialize hash table with -1 
3. For each key, compute index=key%size 
4. If occupied, probe next index
Program: 
#include <stdio.h> 
#define SIZE 10 
int main(){ 
 int hash[SIZE];for(int i=0;i<SIZE;i++)hash[i]=-1;  int n,key,index; 
 scanf("%d",&n); 
 for(int i=0;i<n;i++){ 
 scanf("%d",&key); 
 index=key%SIZE; 
 while(hash[index]!=-1) index=(index+1)%SIZE;  hash[index]=key; 
 } 
 for(int i=0;i<SIZE;i++) printf("%d ",hash[i]);  return 0; 
}
Output: 
 12 22 32 42 52 
-1 12 22 32 42 52 -1 -1 -1 -1 
Result: Thus the program to implement of hashing is written and executed successfully
