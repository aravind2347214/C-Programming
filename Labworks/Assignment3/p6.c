#include<stdio.h>
#include<conio.h>

void refSum(int *a,int *b,int *sum){
	*sum= *a + *b;	
}

void  main(){
	int a,b,sum;
	printf("Enter 2 numbers A and B\n");
	scanf("%d%d",&a,&b);
	printf("A = %d and B = %d\n",a,b);
	refSum(&a,&b,&sum);
	printf("Sum = %d",sum);
	getch();
}
