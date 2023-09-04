// Write a program in C to check whether a ch is a Hexadecimal Digit
// or not.
#include<stdio.h>
#include<conio.h>

void main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= '0' && ch <= '9') || 
        (ch >= 'A' && ch <= 'F') || 
        (ch >= 'a' && ch <= 'f')) {
        printf("%c is a hexadecimal digit.\n", ch);
    } else {
        printf("%c is not a hexadecimal digit.\n", ch);
    }
    
    getch();
}