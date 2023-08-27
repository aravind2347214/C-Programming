// Given two sorted arrays, find the median
// of the combined array. This problem requires efficient merging
// of two sorted arrays and handling odd and even cases.

#include<stdio.h>
#include<conio.h>

int calculateMedian(int a[], int b[], int n)
{
    int mergedArray[2*n];
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (a[i] <= b[j])
            mergedArray[k++] = a[i++];
        else
            mergedArray[k++] = b[j++];
    }

    while (i < n)
        mergedArray[k++] = a[i++];
    while (j < n)
        mergedArray[k++] = b[j++];

    if (k % 2 == 1) 
        return mergedArray[k / 2];
    else 
        return (mergedArray[(k - 1) / 2] + mergedArray[k / 2]) / 2;
}

void main(){

    int n;
    printf("Enter the size of the array A and B: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the elements of the array A (in sorted order): ");
    for (int i = 0; i < n; i++)
       {scanf("%d", &a[i]);}
    printf("Enter the elements of the array B (in sorted order): ");
    for (int i = 0; i < n; i++)
        {scanf("%d", &b[i]);}
    int med = calculateMedian(a, b, n);
    printf("Median of the Merged array is: %d\n", med);
    getch();
}