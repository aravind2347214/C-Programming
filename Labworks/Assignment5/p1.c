// Write a program to print N equal parts of a given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char str[20];
    int parts,i=0,c=1,pl;
    printf("Enter String\n");
    scanf("%s",&str);
    printf("Enter Number of parts\n");
    scanf("%d",&parts);
    pl=strlen(str)/parts;
    printf(" parts=%d  lenth %d   pl=%d\n",parts,strlen(str),pl);
    while(i<=strlen(str)){
        if(c<=pl){
            printf("%c",str[i]);
            i++;
        }
        else{
        c=0;
        printf("  ");
        }
        c++;
    }
    getch();
}