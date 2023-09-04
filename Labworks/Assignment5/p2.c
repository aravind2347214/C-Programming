
// Write a Program to insert characters in a string at a certain position
#include<stdio.h>
#include<conio.h>
#include<string.h>

void insertInString(char *str, char ch, int pos) {

    int len = strlen(str);
        for (int i = len; i >= pos; i--) {
        str[i] = str[i - 1];
    }
        str[pos - 1] = ch;
}

void main(){
    char str[100];
    char chr;
    int pos;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("\nEnter a character to be inserted: ");
    scanf("%c", &chr);
    printf("\nEnter the position to insert: ");
    scanf("%d", &pos);
    printf("\nEntered string : %s",str);
    insertInString(str, chr, pos);
    printf("\nNew string: %s\n", str);
    getch();
}