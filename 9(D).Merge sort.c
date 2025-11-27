Aim:To sort an array using merge sort. 
Algorithm: 
1. Start 
2. Divide array into halves 
3. Recursively sort halves 
4. Merge sorted halves 
5. Stop
Program: 
#include <stdio.h> 
void merge(int a[],int l,int m,int r){ 
 int n1=m-l+1,n2=r-m,i,j,k; 
 int L[n1],R[n2]; 
 for(i=0;i<n1;i++)L[i]=a[l+i]; 
 for(j=0;j<n2;j++)R[j]=a[m+1+j]; 
 i=j=0;k=l; 
 while(i<n1&&j<n2) a[k++]=(L[i]<=R[j])?L[i++]:R[j++];  while(i<n1)a[k++]=L[i++]; 
 while(j<n2)a[k++]=R[j++]; 
} 
void mergeSort(int a[],int l,int r){ 
 if(l<r){int 
m=(l+r)/2;mergeSort(a,l,m);mergeSort(a,m+1,r);merge(a,l,m,r);} }
int main(){ 
 int n;scanf("%d",&n);int a[n]; 
 for(int i=0;i<n;i++) scanf("%d",&a[i]); 
 mergeSort(a,0,n-1); 
 for(int i=0;i<n;i++) printf("%d ",a[i]); 
 return 0; 
} 
Output: 
5 
64 25 12 22 11 
11 12 22 25 64 
Result: Thus the program that sorts arrays using merge sort written and executed successfully
