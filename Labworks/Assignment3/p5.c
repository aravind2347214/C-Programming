#include<stdio.h>
#include<conio.h>

void findBig(int *a,int *b){
	
	if(*a > *b)
		printf("A = %d is greater",*a);
	else if(*b > *a)
		printf("B = %d is Greater",*b);
	else 
		printf("They are Equal");		
}

void  main(){
	int a,b;
	printf("Enter 2 numbers A and B\n");
	scanf("%d%d",&a,&b);
	printf("A = %d and B = %d\n",a,b);
	findBig(&a,&b);
	getch();
}
