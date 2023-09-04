// Write a Program to implement Anagram
#include<stdio.h>
#include<conio.h>
#include<string.h>

int checkAragram(char* st1,char* st2){
    int alphabetCount[26]={0};
    for (int i = 0; st1[i] != '\0'; i++) {
        alphabetCount[(st1[i] - 'a')]++;
    }

     for (int i = 0; st2[i] != '\0'; i++) {
        alphabetCount[(st2[i] -'a')]--;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabetCount[i] != 0) {
            return 0; 
        }
    }
    return 1;   
}

void main(){
    char string1[20], string2[20];
    printf("Enter the first string: ");
    scanf("%s", &string1);
    printf("\nEnter the second string: ");
    scanf("%s", &string2);
    int res = checkAragram(string1,string2);
    if(res==1)
        printf("\nThey are anagrams");
    else
        printf("\nNot anagrams");
    getch();
}