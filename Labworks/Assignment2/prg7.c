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

	for(i=1;i<=limit;i++){
		sum=sum+pow(i,2);
	}
	
	printf("\nSum Of Squares till %0.0f",sum);
	
 getch();	
}
