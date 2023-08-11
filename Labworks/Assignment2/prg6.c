#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

//program to display till nand their sum

void main(){
	int i,value,limit;
    float sum;
	printf("Enter Limit : ");
	scanf("%d",&limit);
	printf("Enter Value of X : ");
	scanf("%d",&value);

	for(i=1;i<=limit;i+=2){
		if(i==3){
			sum=sum-pow(value,i);
		}
		sum=sum+pow(value,i);
	}
	
	printf("\nSum Of  Series x+ x^3 + x^5 . . .  till %d  : %f",limit,sum);
	
 getch();	
}
