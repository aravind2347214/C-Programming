#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void circleArea(){
	int r;
	float area;
	printf("Enter Radius ");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("\nArea Of Circle With Radius %d : %f units",r,area);	
}

void rectArea(){
	int l,b;
	float area;
	printf("Enter Length and Breadth\n");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("\nArea Of Rectangle : %f units",area);		
}

void triangleArea(){
	int h,b;
	float area;
	printf("Enter Breadth and Hieght\n");
	scanf("%d%d",&b,&h);
	area=0.5*b*h;
	printf("\nArea Of Triangle : %f units",area);	
}

void main(){
int ch;

do{
	system("cls");
	printf("\n\tEnter Choice : \n");
	printf(" 1.Area of a Circle\n");
	printf(" 2.Area of a Triangle\n");
	printf(" 3.Area of a Rectangle\n");
	printf(" 4.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:circleArea();break;
		case 2:rectArea();break;
		case 3:triangleArea();break;
		case 4:break;
		default:printf("Invalid choice");
	}
	 getch();
	
}while(ch!=4);

	
}
