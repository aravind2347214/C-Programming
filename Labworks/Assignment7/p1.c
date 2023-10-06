// Write a program to find sum of all prime numbers between 100 and 500
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0;

    for(i = 100; i <= 500; i++)
    {
        int j;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }

        if(j == i/2 + 1)
        {
            sum += i;
        }
    }

    printf("The sum of all prime numbers between 100 and 500 is: %d\n", sum);

    return 0;
}
