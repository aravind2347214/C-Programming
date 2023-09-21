// Write a structure to store the names, salary and hours of work per day of 10 employees
//  in a company. Write a program to increase the salary depending on the number 
//  of hours of work per day as follows and then print the name of all the employees 
//  along with their final salaries. 8
// Hours of work per day     8       10        >=12
// Increase in salary       $50     $100       $150

#include<stdio.h>
#include<conio.h>

struct Employee{
    char name[10];
    float salary;
    int numhrs;

}e[10];

void main(){ 
    int i,N=10;
    printf("Enter Details of 10 Employees : ");
    for( i=0 ;i < N ; ++i){
        printf("\nEmployee %d", (i+1));
        printf("\nName: "); scanf("%s",& e[i].name);
        printf("Salary: ");scanf("%f",& e[i].salary );
        printf("Number Of Hours Worked Per Day:"); scanf("%d",& e[i].numhrs);

        if(e[i].numhrs>8&&e[i].numhrs<10){
            e[i].salary+=50;
        }
        else if(e[i].numhrs>=10&&e[i].numhrs<12){
            e[i].salary += 100;
        }
        else if(e[i].numhrs>12){
            e[i].salary+=150;
        }
        else;
    }

    printf("\nName \t\t Salary");
    printf("\n------------------------------");
    for(i=0;i<N;i++){
        printf("\n%s\t\t%.2f",e[i].name, e[i].salary);
    }
    getch();
}