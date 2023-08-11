#include<stdio.h>
#include<conio.h>
#include<string.h>

//program to display till nand their sum

void main(){
	int multiplier,limit,i;
	printf("Enter Limit : ");
	scanf("%d",&limit);
	printf("Enter Multiplier : ");
	scanf("%d",&multiplier);
	printf("Input upto the table number starting from %d : %d \n",multiplier,limit);
	for(i=1;i<=limit;i++){
	
		printf(" %d X %d = %d \n",multiplier,i,multiplier*i);
	}
	
 getch();	
}
