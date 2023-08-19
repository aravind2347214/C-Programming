#include<stdio.h>
#include<conio.h>
#include<string.h>

void swapper(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(char *wordstr, int begin, int last) {
    if (begin == last) {
        printf("%s ", wordstr);
    } else {
    	int i = begin;
        while(i <= last) {
            swapper((wordstr + begin), (wordstr + i));
            permutation(wordstr, begin + 1, last);
            swapper((wordstr + begin), (wordstr + i));
            i++;
        }
    }
}

void  main(){
	char word[] = "abcd";
    int wordlen = strlen(word);
    printf("The possible permutations of the word are: \n");
    permutation(word, 0, wordlen - 1);
	getch();
}
