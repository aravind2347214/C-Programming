#include<stdio.h>
#include<conio.h>

void pointerSum(int *p1 ,int *p2 ,int *sum){
	*sum = *p1 + *p2;
}

void  main(){
	int a,b,sum;
	printf("Enter 2 numbers A and B\n");
	scanf("%d%d",&a,&b);
	printf("A = %d and B = %d\n",a,b);
	int *aptr= &a;
	int *bptr= &b;
	int *sptr=&sum;
    pointerSum(aptr,bptr,sptr);
	printf("Sum = %d",sum);
	getch();
}
