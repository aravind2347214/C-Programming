#include<stdio.h>
#define DEBUG 0

void main(){

    #if DEBUG
    printf("Debug mode is on\n");
    printf("DEbug enabled");
    #endif
    printf("Debug Disabled");
}
