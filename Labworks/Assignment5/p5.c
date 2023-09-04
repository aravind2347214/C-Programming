// Write a program in C to find the frequency of characters.
#include<stdio.h>
#include<conio.h>
void charecterFrequency(char* str){

    int i,j,freq[256]={0};
    for(i = 0; str[i] != '\0'; i++) {
      freq[str[i]]++;
    }
    for(i = 0; i < 256; i++) {
      if(freq[i] != 0) {
         printf("Frequency of '%c' is %d\n", i, freq[i]);
      }
   }
}


void main(){
    char str[100];
    printf("Enter the String : ");
    scanf("%s",&str);
    charecterFrequency(str);
    getch();
}