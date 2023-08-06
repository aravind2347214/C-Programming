#include<conio.h>
#include <stdio.h>
struct Employee{
	char name[20];
	float da;
	float basicPay;
	float hra;
	float ta;
	int leaves;
	float lop;
	float totalSal;
} e[10];

struct Employee getData(){
	struct Employee e;
	printf("\nEnter Name : ");
	scanf("%s",&e.name);
	printf("Enter Basic Pay : ");
	scanf("%f",&e.basicPay);
	printf("Enter No of Leaves: ");
	scanf("%d",&e.leaves);
	return(e);
}


void salSlipGenerator(struct Employee e){
	e.da  =e.basicPay*0.1;
	e.hra =e.basicPay*0.07;
	e.ta  =e.basicPay*0.05;
	e.lop =e.basicPay*e.leaves*0.005;
	e.totalSal=e.basicPay+e.hra+e.ta+e.da-e.lop;
	printf(" \n------Salary Slip------\n");
	printf("  Name   : %s\n",e.name);
	printf("  Basic  : %0.2f\n",e.basicPay);
	printf("  DA     : %0.2f\n",e.da);
	printf("  HRA    : %0.2f\n",e.hra);
	printf("  TA     : %0.2f\n",e.ta);
	printf("  LOP    : %0.2f\n",e.lop);
	printf("  Total  : %0.2f",e.totalSal);
	printf(" \n-----------------------\n");	
}
void main() {
	int num ,i;
	printf("Enter Number of Employees : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("Enter Details of Employee %d",i);
		e[i]=getData();
	}
	for(i=1;i<=num;i++)
	{
		salSlipGenerator(e[i]);
	}
    getch();
}
