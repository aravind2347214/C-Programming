// Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
// Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse

// the last subarray (irrespective of its size). You shouldn't return any array, modify the given array in-
// place.

// Input:
// N = 5, K = 3
// arr[] = {1,2,3,4,5}
// Output: 3 2 1 5 4
// Explanation: First group consists of elements
// 1, 2, 3. Second group consists of 4,5.
// input:
// N = 4, K = 3
// arr[] = {5,6,8,9}
// Output: 8 6 5 9



#include<stdio.h>
#include<conio.h>

struct ArrayDetails {
    int *arr;
    int size;
};

void reverseSubArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reverseInGroups(struct ArrayDetails *array1, int K) {
    int start = 0;

    while (start < array1->size) {
        int end = start + K - 1;

        if (end >= array1->size) {
            reverseSubArray(array1->arr, start, array1->size - 1);
            break;
        }

        reverseSubArray(array1->arr, start, end);
        start += K;
    }
}

void main() {
    int N = 5;
    int K = 3;
    int arr[] = {1, 2, 3, 4, 5};

    struct ArrayDetails array1;
    array1.arr = arr;
    array1.size = N;

    printf("Initial array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    reverseInGroups(&array1, K);

    printf("\nArray after reversing in groups of %d: ", K);
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

   getch();
}