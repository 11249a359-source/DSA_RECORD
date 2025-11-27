Aim:To sort array using heap sort 
Algorithm: 
1. Start 
2. Swap root with last element 
3. Heapify reduced heap 
4. stop
Program: 
#include <stdio.h> 
void heapify(int a[], int n, int i){ 
 int largest=i,l=2*i+1,r=2*i+2,temp; 
 if(l<n&&a[l]>a[largest]) largest=l; 
 if(r<n&&a[r]>a[largest]) largest=r; 
  
if(largest!=i){temp=a[i];a[i]=a[largest];a[largest]=temp;heapify(a,n,large st);} 
} 
void heapSort(int a[], int n){ 
 for(int i=n/2-1;i>=0;i--) heapify(a,n,i); 
 for(int i=n-1;i>=0;i--){int t=a[0];a[0]=a[i];a[i]=t;heapify(a,i,0);} } 
int main(){ 
 int n;scanf("%d",&n);int a[n]; 
 for(int i=0;i<n;i++) scanf("%d",&a[i]); 
 heapSort(a,n); 
 for(int i=0;i<n;i++) printf("%d ",a[i]); 
 return 0; 
} 
Output: 
5 
4 10 3 5 1 
1 3 4 5 10
Result:Thus a program that sorts arrays using heap sort is written and  executed successfully 
