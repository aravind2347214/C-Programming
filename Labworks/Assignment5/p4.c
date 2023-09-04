// Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

char* fiterAlphabets(char *string) {
    int i, j;
    for (i = 0, j = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';
    return string;
}

void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    printf("Alphabets only : %s\n", fiterAlphabets(str));
    getch();
}