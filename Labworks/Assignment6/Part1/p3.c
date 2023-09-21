// Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two
// arrays are said to be equal if both of them contain same set of elements, arrangements (or
// permutation) of elements may be different though.
// Note : If there are repetitions, then counts of repeated elements must also be same for two array
// to be equal.
// Input:
// N = 5
// A[] = {1,2,5,4,0}
// B[] = {2,4,5,0,1}
// Output: 1
// Explanation: Both the array can be
// rearranged to {0,1,2,4,5}
// Example 2:

// Input:
// N = 3
// A[] = {1,2,5}
// B[] = {2,4,15}
// Output: 0
// Explanation: A[] and B[] have only one common value


#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

struct ArrayDetails {
    int *arr;
    int size;
};

// Function to check if two arrays are equal
bool isArraysEqual(struct ArrayDetails A, struct ArrayDetails B) {
    if (A.size != B.size)
        return false;

    // Create an array to store the frequency of elements in A and B
    int freqA[101] = {0};  // Assuming the elements are in the range 0 to 100
    int freqB[101] = {0};

    // Calculate the frequency of elements in A
    for (int i = 0; i < A.size; i++) {
        freqA[A.arr[i]]++;
        freqB[B.arr[i]]++;
    }

    // Check if the frequencies of each element match
    for (int i = 0; i <= 100; i++) {
        if (freqA[i] != freqB[i])
            return false;
    }

    return true;
}

int main() {
    int N = 5;
    int arrA[] = {1, 2, 5, 4, 0};
    int arrB[] = {2, 4, 5, 0, 1};

    struct ArrayDetails A = {arrA, N};
    struct ArrayDetails B = {arrB, N};

    // Check if the arrays are equal
    bool isEqual = isArraysEqual(A, B);

    printf("Output: %d\n", isEqual);

    getch();
}