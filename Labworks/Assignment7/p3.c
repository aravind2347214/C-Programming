// Write a program to obtain sum of the first 10 terms of the following series for any positive
// integer value of X : X +X3 /3! +X5 /5! ! +X7 /7! + ...

#include <stdio.h>
#include <math.h>
int findfactorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*findfactorial(n-1);
}
void main() 
{
    float seriesSum;
    int xvalue;
    int j=1;
    printf("Enter the value of 'x':\n");
    scanf("%d",&xvalue);
    seriesSum=xvalue;
    for(int i=0;i<10;i++)
    {
            seriesSum+=(pow(xvalue,j))/findfactorial(j);
            j=j+2;
    }
    printf(" Series  Sum is : %.2f", seriesSum);
   
}
