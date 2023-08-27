// Write a program to rotate an array of size n by d positions to the left.
// For example, if the array is {1, 2, 3, 4, 5} and
//  d is 2, the rotated array should be {3, 4, 5, 1, 2}.

#include<stdio.h>
#include<conio.h>

void arrayRotate(int a[10],int d,int n){

     int temp[d];
    
    for (int i = 0; i < d; i++) {
        temp[i] = a[i];
    }
    
    for (int i = d; i < n; i++) {
        a[i - d] = a[i];
    }
    
    for (int i = 0; i < d; i++) {
        a[n - d + i] = temp[i];
    }

}

void main(){
    int a[] = {1, 2, 3, 4, 5};
    int d = 2;
    int n = sizeof(a) / sizeof(a[0]);
    
    printf("Initial array: ");
    for (int i = 0; i < n; i++) {
        printf("[%d] ", a[i]);
    }
    
    arrayRotate(a, d, n);
    
    printf("\n\nArray after Rotation : ");
    for (int i = 0; i < n; i++) {
        printf("[%d] ", a[i]);
    }
    
    getch();
}