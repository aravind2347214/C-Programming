#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){	
   char ASCII ;
   printf("Enter an ASCII Character : ");
   scanf("%c",&ASCII);
   int correspondingNum = (int)ASCII;
   printf("The Corresponding Number to %c:%d",ASCII,correspondingNum);
   getch();	
}
