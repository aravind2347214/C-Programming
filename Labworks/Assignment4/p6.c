// Write a program in C to find the missing number in a given array.
//  There are no duplicates in the list.
// Expected Output :
// The given array is : 1 3 4 2 5 6 9 8
// The missing number is : 7

#include<stdio.h>
#include<conio.h>

void main(){
    int a[10] = {1,3,4,2,5,6,9,8};
    int givenSum = 0, i, size = sizeof(a)/sizeof(a[0]);
    printf("The given array is :");

    for(i=0;i<size;i++)
        { 
        if(a[i]!=0)
            {    
            givenSum +=a[i];
            printf("%d ",a[i]);
            }
        }

    int sumTilln = (size *(size-1))/2;
    int missingnum= sumTilln-givenSum; 
    printf("\nThe missing number is : %d",missingnum);
    getch();
}