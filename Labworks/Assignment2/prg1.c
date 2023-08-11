#include<stdio.h>
#include<conio.h>
#include<string.h>

//program to display till nand their sum

void main(){
	int n,i,sum=0;
	printf("Test Data : ");
	scanf("%d",&n);
	printf("The first %d natural numbers \n",n);
	for(i=1;i<=n;i++){
		sum+=i;
		printf("%d\t",i);
	}
	printf("\n The sum of first %d natural Numbers : %d",n,sum);
 getch();	
}






