#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void main()
{
    char string[5]="qwertwert";
    char*ptr=string;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    getch();
}
