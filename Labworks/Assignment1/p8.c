#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){	
  int ll=10,ul=100,i,cnum,asum,len,d,temp;
  printf("Enter Lower Limit and Upper Limit : ");
  scanf("%d%d",&ll,&ul);
  printf("\nThe Armstrong numbers between %d and %d are :",ll,ul);
	   i=ll;
	   while(i<=ul){
	   	    cnum=i;
	   	    temp=i;
	   	    len=0;
	   	    asum=0;
	   		 do {
                  temp /= 10;
                  ++len;
                } while (temp!= 0);  	
			
			temp=i;
			while(temp!=0)	
			{
				d=temp%10;
				asum=asum+pow(d,len);
				temp/=10;	
			}
			if(asum==cnum){
				printf(" %d",cnum);
			}
		    i++;		
	   }
	   getch();	
	}
