#include<stdio.h>
#include<conio.h>

void stringLength(char *strptr){
	char *ptr = strptr;
	while(*ptr!='\0'){
		++ptr;
	}
	int len = ptr-strptr;
	printf("\nLength of String : %d",len);	
}

void  main(){
	char inputString[10];
	printf("Enter String : ");
	scanf("%s",&inputString);
	
	char *strptr = inputString;
	printf("Inputted String is %s",strptr);
	
	stringLength(strptr);
	
	getch();
}
