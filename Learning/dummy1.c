#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef char myName;
typedef int myAge;

void main(){
    myName name[20];
    myAge age;
    printf("Enter your Name: ");
    gets(name);
    printf("\nEnter Your Age");
    scanf("%d",&age);
    printf("Your Name is  %s  and you are %d years old",name,age);
    getch();
}
