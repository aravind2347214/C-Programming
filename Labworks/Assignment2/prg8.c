#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void main(){
	int temp;
	printf("Enter Temperature in centigrade : ");
	scanf("%d",&temp);
	if(temp<0)
		printf("It is Freezing");
	else if(0<=temp&&temp<10)
		printf("It is Very Cold");
	else if(10<=temp&&temp<20)
		printf("It is a Cold Weather");
	else if(20<=temp&&temp<30)
		printf("It is Normal in Temperature");
	else if(30<=temp&&temp<40)
		printf("It is Hot");
	else if(temp>40)
		printf("It is Very Hot");
	else 
	    printf("It is an invalid temperature");	
 getch();	
}
