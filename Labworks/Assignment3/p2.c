#include<stdio.h>
#include<conio.h>
#include<string.h>

void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void main(){
	int a ,b;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	printf("Before Swapping A= %d and B=%d\n",a,b);
	swap(&a,&b);
	printf("After Swapping A= %d and B=%d\n",a,b);
 getch();	
}
