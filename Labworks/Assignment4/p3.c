// Write a program in C to count the repuency of each element 
// of an array ( Give input with multiple times repetition .
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 25
// element - 1 : 12
// element - 2 : 43
// Expected Output :
// The repuency of all elements of an array :
// 25 occurs 1 times
// 12 occurs 1 times
// 43 occurs 1 times

#include <stdio.h>
#include<conio.h>

void main() 
{ 
int i, j,a[10],n,rep[10];
printf("Input the number of elements to be stored in the array: ");
scanf("%d", &n);

printf("Input %d elements in the array:\n", n);
for (i = 0; i < n; i++) {
    printf("element - %d : ", i);
    scanf("%d", &a[i]);
   }

for (i = 0; i < n; i++) {
    rep[i] = -1; 
    }

for (i = 0; i < n; i++) {
    int count = 1;
    
    for (j = i + 1; j < n; j++) {
        if (a[i] == a[j]) {
            count++; 
            rep[j] = 0; 
        }
    }
    
    if (rep[i] != 0) {
        rep[i] = count;
    }
}
printf("\nThe frequency of all elements of an array:\n");
for (i = 0; i < n; i++) {
    if (rep[i] != 0) {
        printf("%d occurs %d times\n", a[i], rep[i]);
    }
  }
}



