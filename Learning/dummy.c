#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void main(){

    int a[10];
    int i,j;

    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int l= sizeof(a)/sizeof(a[0]);
    printf("Reverese:  ");
    for (i = l-1; i >=0 ; i--)
    {
        printf("%d\t",a[i]);
    }
    
    
    getch();
	
}
