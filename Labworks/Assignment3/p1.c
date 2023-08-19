#include<stdio.h>
#include<conio.h>
#include<string.h>

void stringReverse(char *inputString){
	
	char *ptr = inputString + strlen(inputString);
	for(;ptr>=inputString;ptr--){
		printf("%c",*ptr);
	}
	printf("\n");	
}

void  main(){
	char *inputString="This is the String";
	printf("The original string : %s\n\n",inputString);
	printf("The Reversed String is :");
	stringReverse(inputString);
	getch();
}
