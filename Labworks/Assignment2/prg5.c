#include<stdio.h>
#include<conio.h>
#include<string.h>

//program to display till nand their sum

void main(){
	int i,value=9,limit;
	float sum;
	printf("Enter Limit : ");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){
		printf("%d  ",value);
		sum+=value;
		value=value*10 +9;
		
	}
	
	printf("\nSum Of  Series till %d terms : %f",limit,sum);
	
 getch();	
}
