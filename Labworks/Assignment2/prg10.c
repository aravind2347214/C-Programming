#include<stdio.h>
#include<conio.h>

void main(){
int dig;
printf("Enter digit : ");
scanf("%d",&dig);
switch(dig){
	case 1:printf("\nOne");break;
	case 2:printf("\nTwo");break;
	case 3:printf("\nThree");break;
	case 4:printf("\nFour");break;
	case 5:printf("\nFive");break;
	case 6:printf("\nSix");break;
	case 7:printf("\nSeven");break;
	case 8:printf("\nEight");break;
	case 9:printf("\nNine");break;
	case 10:printf("\nTen");break;
	default:printf("Invalid Month");
}
 getch();	
}
