// Write a program in C to split strings by space into words.
// Test Data :
// Input a string : this is a test string
// Expected Output :
// Strings or words after split by space are :
// this
// is
// a
// test
// string


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void wordSplit(char* str) {
    
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == ' ') 
            printf("\n");
        else
            printf("%c",str[i]);
    }
}
void main(){
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    wordSplit(str);
}