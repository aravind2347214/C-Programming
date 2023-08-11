#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void main(){
	int cId,units;
	float amount=100,surcharge=0,rate=0.0;
	char name[20];
		
	printf("Enter Customer ID , Custtomer Name and the Units Consumed Repectively\n");
	scanf("%d%s%d",&cId,&name,&units);
	if(units<199){
		if(units!=0){
			amount=units*1.20;
			rate=1.20;
		}	
	}
	else if(units<400&&units>=200){
		amount=units*1.50;
		rate=1.50;
		
	}
	else if(units<600&&units>=400){
		amount=units*1.80;
		rate=1.80;
	}
	else
	{
		amount=units*2.0;
		rate=2.0;
	}
	
	if(amount>400){
		surcharge=amount*15/100;
	}
	
	printf("Customer ID    : %d\n",&cId);
	printf("Customer Name  : %s\n",&name);
	printf("Units Consumed : %d\n",&units);
	printf("Amount Charges @Rs. %0.2f per unit : %0.2f\n",rate,amount);
	printf("Surcharge Amount : %0.2f\n",surcharge);
	printf("Net Amount to be paid By Customer : %0.2f\n",surcharge+amount);

	
	
	
 getch();	
}
