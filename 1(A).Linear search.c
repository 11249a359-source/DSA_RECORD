Aim:  To find the element in an array using linear search 
Algorithm: 
1. Start 
2. Read n and array elements 
3. Read search element key 
4. Traverse array and compare each element with key 5. If found, print position and stop 
6. Else print “Not found” 
7. Stop
Program: 
#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
   for (int i = 0; i < n; i++) {
       if (arr[i] == key) {
           return i; 
       }
   }
   return -1; 
}
int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int n = sizeof(arr) / sizeof(arr[0]);
   int key = 30;
   int result = linearSearch(arr, n, key);
   if (result != -1) {
       printf("Key found at index: %d\n", result);
   } else {
       printf("Key not found\n");
   }
   return 0;
}

Output: 
Key found at index: 2
