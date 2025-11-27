Aim: To sort an array using selection sort. 
Algorithm: 
1. Start 
2. Repeat for i=0 to n-1 
3. Find min element index 
4. Swap with a[i] 
5. Stop
Program: 
#include <stdio.h> 
int main(){ 
 int n,i,j,min,temp; 
 scanf("%d",&n); 
 int a[n]; 
 for(i=0;i<n;i++) scanf("%d",&a[i]); 
 for(i=0;i<n-1;i++){ 
 min=i; 
 for(j=i+1;j<n;j++) if(a[j]<a[min]) min=j; 
 temp=a[i];a[i]=a[min];a[min]=temp; 
 } 
 for(i=0;i<n;i++) printf("%d ",a[i]); 
 return 0; 
} 
Output: 
64 25 12 22 11 
11 12 22 25 64 
Result: Thus,a program that sorts using array .selection sort is written and executed successfully
