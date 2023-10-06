// Write a C function to remove duplicates from an ordered array. For example, if input array
// contains 10,10,10,30,40,40,50,80,80,100 then output should be 10,30,40,50,80,100.

#include <stdio.h>
#include <stdlib.h>

int removeDupe(int* arr, int n)
{
    if (n == 0 || n == 1)
        return n;
  
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
      return j + 1;
}

void main()
{
    int arr[] = { 10, 10, 10, 30, 40, 40, 50, 80, 80, 100 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    int newSize = removeDupe(arr, n);
  
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
  
}