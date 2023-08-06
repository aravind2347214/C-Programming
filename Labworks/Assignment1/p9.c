#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){	
   int ll=10,ul=100,i,cnum,dsum;
//   printf("Enter Lower Limit and Upper Limit : ");
//   scanf("%d%d",&ll,&ul);
   printf("\nThe Perfect numbers between %d and %d are :",ll,ul);
   i=ll;
   while(i<=ul){
   	 int j=1;
   	 dsum=0;
   	 cnum=i;
   	 while(j<=cnum/2)
		{
   	 	if(cnum%j==0)
			{
				dsum=dsum+j;
			}
		j++;
		}
		
	if(dsum==cnum)
		{
			printf("  %d",cnum);
		}
	i++	;		
   }
   getch();	
}
