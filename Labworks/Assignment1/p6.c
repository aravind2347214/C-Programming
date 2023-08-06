#include<conio.h>
#include <stdio.h>
float calculateTax(float basicSal) {
    float tax;
    if (basicSal < 9000) {
        tax = 0.20 * basicSal;
    } else {
        tax = 0.25 * basicSal;
    }

    float payableTax = tax - 200000; 
    if (payableTax < 0) {
        payableTax = 0;}
    return payableTax;
}

void main() {
    int emps,i;
    printf("Enter the number of employees: ");
    scanf("%d", &emps);
    for ( i = 1; i <= emps; i++) {
        float basicSal;
        printf("\nEnter the basic salary for employee %d: ", i);
        scanf("%f", &basicSal);
        float tax = calculateTax(basicSal);
        printf("Tax for employee %d is: %.3f\n", i, tax);
    }
    getch();
}
