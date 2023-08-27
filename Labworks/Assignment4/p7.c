// Write a program in C to find the Floor and Ceiling of the number 0 to 10 from a sorted array.
// Expected Output :
// The given array is : 1 3 5 7 8 9
// Number: 0 ceiling is: 1 floor is: -1
// Number: 1 ceiling is: 1 floor is: 1
// Number: 2 ceiling is: 3 floor is: 1
// Number: 3 ceiling is: 3 floor is: 3
// Number: 4 ceiling is: 5 floor is: 3
// Number: 5 ceiling is: 5 floor is: 5
// Number: 6 ceiling is: 7 floor is: 5
// Number: 7 ceiling is: 7 floor is: 7
// Number: 8 ceiling is: 8 floor is: 8
// Number: 9 ceiling is: 9 floor is: 9
// Number: 10 ceiling is: -1 floor is: 9

#include<stdio.h>
#include<conio.h>

void ceilfloorfinder(int  digit,int a[10],int n,int *floor,int *ceil){
    int i;

    if(digit<a[0]){
        *floor=-1;
        *ceil=a[0];
        return;
    }

    if(digit > a[n-1]){
        *floor=a[n-1];
        *ceil=-1; 
        return;
    }

    *ceil=*floor=-1;

    for(i=0;i<n;i++){
        if(a[i]==digit){
            *ceil=*floor=digit;
        }

        if(a[i+1]>digit && digit>a[i]){
            *ceil=a[i+1];
            *floor=a[i];
        }
    }
}

void main(){

    int n,g[10],i,j;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&g[i]);
    }

    printf("\nThe given array is : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d",g[i]);
    }

    for(i=0;i<=10;i++){
        int floor,ceil;
        ceilfloorfinder(i,g,n,&floor,&ceil);
        printf("\nNumber %d : ceiling is : %d and floor is %d",i,ceil,floor);
    }
    getch();
}