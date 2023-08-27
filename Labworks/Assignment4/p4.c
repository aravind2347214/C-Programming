// Write a program in C to find a pair with given sum in the array.
// Expected Output :
// The given array : 6 8 4 -5 7 9
// The given sum : 15
// Pair of elements can make the given sum by the value of index 0 and 5

#include<stdio.h>
#include<conio.h>

void main(){
    int a[10],n,i,j,sum;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Sum to Check : ");
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("Pair of elements can make the given sum %d by the value of index %d and %d \n",sum,i,j);
            }
        }
    }
    getch();
}