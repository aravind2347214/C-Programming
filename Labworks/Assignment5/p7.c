// Write a program in C to replace the spaces in a string with a specific
// character.
// Test Data :
// Input a string : Be glad to see the back of Input replace character : *
// Expected Output :
// After replacing the space with * the new string is :
// Be*glad*to*see*the*back*of*

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void charReplace(char* str, char ch) {
    
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == ' ') {
            str[i] = ch;
        }
    }
}

void main(){
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter Replace Charecter: ");
    scanf("%c", &ch);
    
    charReplace(str, ch);
    
    printf("String after Replacement: %s\n", str);
    
}