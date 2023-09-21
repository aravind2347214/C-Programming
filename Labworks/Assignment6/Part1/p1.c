//  Given an integer N and an integer D, rotate the binary representation of the integer
//  N by D digits to the left as well as right and return the results in
//  their decimal representation after each of the rotation.
//  Note: Integer N is stored using 16 bits. i.e. 12 will be stored as
//  0000000000001100.
//  Input:
//  N = 28, D = 2
//  Output:
//  112
//  7
//  Explanation:
//  28 in Binary is: 0000000000011100
//  Rotating left by 2 positions, it becomes 0000000001110000 = 112 (in decimal).
//  Rotating right by 2 positions, it becomes 0000000000000111 = 7 (in decimal).

#include<stdio.h>
#include<conio.h>

struct Binary {
    int bits[16];
};


struct Binary rotateToLeft(struct Binary num, int pos) {
    struct Binary result;
    for (int i = pos; i < 16; i++) {
        result.bits[i - pos] = num.bits[i];
    }
    for (int i = 16 - pos; i < 16; i++) {
        result.bits[i] = num.bits[i - (16 - pos)];
    }
    return result;
}

struct Binary rotateToRight(struct Binary num, int pos) {
    struct Binary result;
    for (int i = 0; i < 16 - pos; i++) {
        result.bits[i + pos] = num.bits[i];
    }
    for (int i = 0; i < pos; i++) {
        result.bits[i] = num.bits[16 - pos + i];
    }
    return result;
}

int binaryToDecimal(struct Binary num) {
    int dec = 0;
    int base = 1;
    for (int i = 15; i >= 0; i--) {
        dec += num.bits[i] * base;
        base *= 2;
    }
    return dec;
}

void main() {
    int Num = 28;
    int pos = 2;

    struct Binary binNum;
    for (int i = 0; i < 16; i++) {
        binNum.bits[i] = (Num >> (15 - i)) & 1;
    }

    printf("Original number : %d\n",Num);

    struct Binary LeftRotatedBinary = rotateToLeft(binNum, pos);
    int resultLeft = binaryToDecimal(LeftRotatedBinary);
    printf("Binary Number Rotated left by %d positions: %d\n", pos, resultLeft);

    struct Binary RightRotatedBinary = rotateToRight(binNum, pos);
    int resultRight = binaryToDecimal(RightRotatedBinary);
    printf("Binary Number Rotated right by %d positions: %d\n", pos, resultRight);

getch();
}