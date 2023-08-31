#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void main()
{
    char string[20];
    char sub[10];
    int ch;
    printf("Enter String");
    scanf("%s", &string);
    printf("Enter Sub String");
    scanf("%s", &sub);
    printf("Enter Choice \n 1.String Compare \n 2.Check Presence \n 3.Copy String\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        char *result = strstr(string, sub);
        if (!result)
        {
            printf("Not Present in String");
        }
        else
        {
            printf("%s", result);
        }
        break;
    case 2:
        if (!strcmp(string, sub))
        {
            printf("They are Equal");
        }
        else
        {
            printf("They are not Equal");
        }
        break;
    case 3:
        strcpy(sub, string);
        printf("String Copied to substring is :%s", sub);
        break;

    default:
        printf("Invalid choice");
        break;
    }

    getch();
}
