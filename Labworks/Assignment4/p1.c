// Write a program in C to store elements in an array and print them.
// Test Data :
// Input 10 elements in the array :
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// .......
// Expected Output :
// Elements in array are: 1 1 2 3 4 5 6 7 8 9.

#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],i,n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    printf("\nEnter %d elements : \n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Element - %d : %d\n",i,a[i]);
    }
    getch();
}