#include<stdio.h>
#include<conio.h>
#include<math.h>
//Write a program in C to make a pyramid pattern with numbers increased by multiples of  five 
void main(){
   int i, gap, rowlimit, j = 0,vcounter=1;
   printf("Enter the limit: ");
   scanf("%d", &rowlimit);
   for (i = 1; i <= rowlimit; ++i, j = 0) {
      for (gap = 1; gap <= rowlimit - i; ++gap) {
         printf("  ");
      }
      while (j != 2 * i - 1) {
         printf("%d ",vcounter*5);
         ++j;vcounter++;
      }
      printf("\n");
   }
	getch();	
}
