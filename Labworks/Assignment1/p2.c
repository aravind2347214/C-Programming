#include<stdio.h>
#include<conio.h>
void main(){
	int age;
	printf("Enter Age of Candidate : ");
	scanf("%d",&age);
	if(age>=18)
		printf("The Candidate is Eligible");
	else
		printf("The Candidate is Not Eligible");
 getch();	
}
