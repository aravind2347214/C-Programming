// Write a program in C to find the largest sum of contiguous subarrays in an array.
// Expected Output :
// The given array is : 8 3 8 -5 4 3 -4 3 5
// The largest sum of contiguous subarray is : 21

#include<stdio.h>
#include<conio.h>

int subMax(int a[10],int n){
    int currentSum=0;
    int maximumSum=0;
    int i;
    for (i = 0; i < n; i++)
    {
        currentSum = currentSum + a[i];
        if(currentSum>maximumSum){
            maximumSum = currentSum;
        }
        if(currentSum<0){
            currentSum = 0;
        }
    }
    return maximumSum;
}

void main(){
    int a[10],n,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int maximumSum= maxSubArraySum(a,n);
    printf("The given array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe largest sum of contiguous subarray is : %d",maximumSum);
    
    getch();
}