#include<stdio.h>
#include<conio.h>
#include<string.h>

//program to display till nand their sum

void main(){
	int i,limit;
	float sum;
	printf("Enter Limit : ");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){
		sum=sum+(1/(float)i);
		printf(" %d/%d + ",1,i);
	}
	
	printf("\nSum Of Harmonic Series till %d terms : %f",limit,sum);
	
 getch();	
}
