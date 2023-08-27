// Given an array containing n distinct numbers taken 
// from the range 0 to n, find the missing number in the
// sequence. The array is missing exactly one number.

#include<stdio.h>
#include<conio.h>

int missingNum(int n,int a[]){
    int sumtillN = (n * (n + 1)) / 2;
    int givenSum = 0;
    for (int i = 0; i < n - 1; i++) {
        givenSum += a[i];
    }
    int missingNum = sumtillN - givenSum;
    return missingNum;
}

void main(){
    int a[] = {1, 2, 5, 6, 3, 7, 8, 9, 10},i; 
    int n = sizeof(a) / sizeof(a[0]) ; 
    
    printf("The given array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    int missingNumber = missingNum(n,a);
    printf("\n\nThe missing number is: %d\n", missingNumber);
    getch();
}