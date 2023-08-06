#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float a,b;
	int choice;
	char rerun;
	do{
	printf("\n\nEnter 2 Numbers (A and B) : \n");
	scanf("%f%f",&a,&b);
	printf("----Choose Option----\n");
	printf("1. A + B \n");
	printf("2. A - B \n");
	printf("3. B - A \n");
	printf("4. A * B \n");
	printf("5. A / B \n");
	printf("6. B / A \n");
	printf("7. A power B \n");
	printf("8. B power A \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:printf("%f + %f = %f",a,b,a+b);break;
		case 2:printf("%f - %f = %f",a,b,a-b);break;
		case 3:printf("%f - %f = %f",b,a,b-a);break;
		case 4:printf("%f * %f = %f",a,b,a*b);break;
		case 5:printf("%f / %f = %f",a,b,a/b);break;
		case 6:printf("%f / %f = %f",b,a,b/a);break;
		case 7:printf("%f power %f = %f",a,b,pow(a,b));break;
		case 8:printf("%f power %f = %f",b,a,pow(b,a));break;
		default:printf("Invalid option");
	}
	printf("\n\nWant to try again (y/n)");
	scanf("%s",&rerun);
    }while(rerun=='y'||rerun=='Y');
	getch();	
}
