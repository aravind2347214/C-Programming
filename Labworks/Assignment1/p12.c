#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
   int i, limit,sum=0;
   printf("Enter a Limit : ");
   scanf("%d",&limit);
   for(i = 0;i<=limit;i++)
   {
   	if(i%2==0)
   	  sum+=i;			
   }
   printf("Sum of Even Numbers till %d : %d",limit,sum);
   getch();	
}
