#include<stdio.h>
#include<conio.h>
#include<math.h>

int additionFunction(int v){
	int oldsum=v,i=1,newsum;
	while(i<=7){
		newsum=2*oldsum;
		oldsum=newsum;
		i+=1;
	}
	i=1;
	while(i<=3){
		newsum=newsum-v;
		i++;	
	}
	return newsum;	
}

void main(){
   int sum = additionFunction(8);
   printf("Sum to 8 is : %d ",sum);
   getch();	
}
