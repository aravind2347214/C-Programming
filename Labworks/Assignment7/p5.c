
// Write a program to convert a given decimal number to its binary equivalent and vice versa.
#include <stdio.h>
#include <math.h>

int decimalToBinary(int decimalNumber);
int binaryToDecimal(int binaryNumber);

void main() {
    int decimalNumber, binaryNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    binaryNumber = decimalToBinary(decimalNumber);
    printf("Binary equivalent: %d\n", binaryNumber);
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);
    decimalNumber = binaryToDecimal(binaryNumber);
    printf("Decimal equivalent: %d\n", decimalNumber);

}

int decimalToBinary(int decimalNumber) {
    int remainder, binaryNumber = 0, i = 0;
    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        decimalNumber /= 2;
        binaryNumber += remainder * pow(10, i);
        i++;
    }
    return binaryNumber;
}

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        i++;
    }
    return decimalNumber;
}