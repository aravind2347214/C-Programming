// Write a program in C to find the smallest missing element in a sorted array.
// Expected Output :
// The given array is : 0 1 3 4 5 6 7 9
// The missing smallest element is: 2

#include<stdio.h>
#include<conio.h>

int missingElement(int arr[], int size) {
    int i;
    for(i = 0; i < size-1; i++) {
        if(arr[i+1] - arr[i] > 1) {
            return arr[i] + 1;
        }
    }
    return -1;
}

void main(){

    int a[] = {0, 1, 3, 4, 5, 6, 7, 9};
    int n = sizeof(a) / sizeof(a[0]);

    int melement = missingElement(a, n);

    printf("\nThe given array is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    if(melement != -1) {
        printf("\nThe missing smallest element is: %d\n", melement);
    } else {
        printf("\nNo missing element found.\n");
    }

    
    getch();
}