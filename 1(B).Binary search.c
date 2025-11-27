Aim: To search an element in a sorted array using binary search. 
Algorithm: 
1. Start 
2. Input sorted array and key 
3. Set low=0, high=n-1 
4. Repeat while low<=high 
5. Find mid=(low+high)/2 
6. If a[mid]==key, print found 
7. If a[mid]>key, set high=mid-1, else low=mid+1 
8. Stop
Program: 
#include <stdio.h>
int main() 
{
   int arr[10], n, search, first, last, middle;
   printf("Enter the number of elements (max 10): ");
   scanf("%d", &n);
   printf("Enter %d elements in ascending order:\n", n);
   for (int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
   printf("Enter the element to search: ");
   scanf("%d", &search);
     first = 0;
   last = n - 1;
   middle = (first + last) / 2;
     while (first <= last) {
       if (arr[middle] == search) {
           printf("Element %d found at position %d.\n", search, middle + 1);
           return 0;
       } else if (arr[middle] < search) {
           first = middle + 1; // Search in the right half
       } else {
           last = middle - 1; // Search in the left half
       }
       middle = (first + last) / 2;
   }
   printf("Element %d is not present in the array.\n", search);
   return 0;
}

Output: 
Enter the number of elements (max 10): 7
Enter 7 elements in ascending order:
0
1
2
3
4
5
6
Enter the element to search: 3
Element 3 found at position 4.

Result: Thus, a program that searches an element in a sorted array using binary search is written and executed successfully
