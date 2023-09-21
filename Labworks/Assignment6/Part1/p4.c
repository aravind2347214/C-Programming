// Given an integer array Arr of size N. For each element in the array, check whether the right adjacent
// element (on the next immediate position) of the array is smaller. If next element is smaller, update
// the current index to that element. If not, then -1.
// Input:
// N = 5
// Arr[] = {4, 2, 1, 5, 3}
// Output:
// 2 1 -1 3 -1
// Explanation: Array elements are 4, 2, 1, 5 3.

//  Next to 4 is 2 which is smaller, so we print 2. Next of 2 is 1 which is smaller,so we print 1. Next of 1
// is 5 which is greater, so we print -1. Next of 5 is 3 which is smaller, so we print 3. Note that for last
// element, output is always going to be -1 because there is no element on right.

// Input:
// N = 6
// Arr[] = {5, 6, 2, 3, 1, 7}
// Output:
// -1 2 -1 1 -1 -1
// Explanation: Next to 5 is 6 which is
// greater, so we print -1.Next of 6 is 2
// which is smaller, so we print 2. Next
// of 2 is 3 which is greater, so we
// print -1. Next of 3 is 1 which is
// smaller, so we print 1. Next of 1 is
// 7 which is greater, so we print -1.
// Note that for last element, output is
// always going to be -1 because there is
// no element on right.


#include<stdio.h>
#include<conio.h>

struct ArrayDetails {
    int *arr;
    int size;
};

void SmallerRightAdjacent(struct ArrayDetails arr1) {
    int N = arr1.size;
    int *Arr = arr1.arr;

    for (int i = 0; i < N - 1; i++) {
        if (Arr[i] > Arr[i + 1])
            printf("%d ", Arr[i + 1]);
        else
            printf("-1 ");
    }
    printf("-1");
}

void main() {
    int N1 = 5,i;
    int Arr1[] = {4, 2, 1, 5, 3};
    struct ArrayDetails arr1 = {Arr1, N1};

    printf("First input: ");
    for(i=0;i<N1;i++)
        printf("%d ",Arr1[i]);
    printf("\nOutput for the first input: ");
    SmallerRightAdjacent(arr1);
    printf("\n");

    int N2 = 6;
    int Arr2[] = {5, 6, 2, 3, 1, 7};
    struct ArrayDetails arr2 = {Arr2, N2};

    printf("Second input: ");
    for(i=0;i<N2;i++)
        printf("%d ",Arr2[i]);
    printf("\nOutput for the second input: ");
    SmallerRightAdjacent(arr2);
    printf("\n");

  getch();
}