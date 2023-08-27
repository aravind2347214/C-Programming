
#include <stdio.h>
#include <conio.h>

int *bubbleSort(int a[10], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return a;
}

int *selectionSort(int a[10], int n)
{
    int i, j, small;

    for (i = 0; i < n - 1; i++)
    {
        small = i;

        for (j = i + 1; j < n; j++)
            if (a[j] < a[small])
                small = j;

        int temp = a[small];
        a[small] = a[i];
        a[i] = temp;
    }

    return a;
}

int *insertionSort(int a[10], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    return a;
}

void displayArray(int a[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("[%d] ", a[i]);
    }
}

void main()
{
    int ch;
    do
    {
        int a[10], i, n;
        printf("\n\nEnter Array Size\n");
        scanf("%d", &n);
        printf("\nEnter %d Elements : \n", n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("\n\nEnter Choice\n");
        printf("\t1.Bubble Sort\n");
        printf("\t2.Selection Sort\n");
        printf("\t3.Insertion Sort\n");
        scanf("%d", &ch);

        if (ch == 1)
        {
            int *res = bubbleSort(a, n);
            printf("Result By Bubble Sort is :");
            displayArray(res, n);
        }
        else if (ch == 2)
        {
            int *res = selectionSort(a, n);
             printf("Result By Selection Sort is :");
            displayArray(res, n);
        }
        else if (ch == 3)
        {
            int *res = insertionSort(a, n);
            printf("Result By Insertion Sort is :");
            displayArray(res, n);
        }
        else
        {
            printf("\nInvalid option\n");
        }
        getch();

        printf("\nDo you want to run again(1/0)");
        scanf("%d", &ch);

    } while (ch == 1);
}