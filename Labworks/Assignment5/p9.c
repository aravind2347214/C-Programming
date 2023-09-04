// Write a C program to reverse all the vowels present in a given string.
// Return the newly created string.
// Test Data :
// Input a string: “AEIou”
// Expected Output:
// Input a string:

#include<stdio.h>
#include<string.h>
#include<conio.h>

int checkVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void reverseVowels(char *str) {
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        if (!checkVowel(str[start])) {
            start++;
            continue;
        }
        if (!checkVowel(str[end])) {
            end--;
            continue;
        }
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

void main(){
    char str[100];
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    reverseVowels(str);
    printf("Reversed vowels in the string: %s\n", str);
    getch();
}