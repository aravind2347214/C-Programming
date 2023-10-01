#include<stdio.h>
#include<conio.h>
#include<string.h>

enum MONTH{
    January,February,March,April,May,June,July,August,September,October,November,December
};



void main(){

    enum MONTH selectedmonth;
    int m;
    printf("Enter Month");
    scanf("%d",&m);
    selectedmonth=(enum MONTH)m;
    switch(selectedmonth){
        case January:printf("It is January");break;
        case February:printf("It is February");break;
        case March:printf("It is March");break;
        case April:printf("It is April");break;
        case May:printf("It is May");break;
        case June:printf("It is June");break;
        case July:printf("It is July");break;
        case August:printf("It is August");break;
        case September:printf("It is September");break;
        case October:printf("It is October");break;
        case November:printf("It is November");break;
        case December:printf("It is December");break;
        default:printf("Invalid Month");break;
    }
    getch();
}

