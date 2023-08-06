#include<stdio.h>
#include<conio.h>
void main(){
	int m;
	printf("Enter an Integer Number : ");
	scanf("%d",&m);
	if(m>0)
		printf("Entered Number is 1");
	else if(m<0)
		printf("Entered Number is -1");
	else
		printf("Entered Number is 0");
    getch();
}
