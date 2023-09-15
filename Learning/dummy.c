#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee {
	int empid;
	char ename[10];
	char desc[10];
    float sal;
}e[100],*ptr;

struct employee getdata(int n){
   struct employee temp ;
   ptr=&temp;
   printf("Enter information of employee %d",n);
   printf("Enter Employee Id");
   scanf("%d",&ptr->empid);
   printf("Enter Name");
   scanf("%s",&ptr->ename);
   printf("Enter Designation");
   scanf("%s",&ptr->desc);
   printf("Enter Salary");
   scanf("%f",&ptr->sal);
   return *ptr;
}

void showdata(struct employee e){
    ptr = &e;
    printf("\n---------------------------\n");
    printf("Emp ID      : %d\n",ptr->empid);
    printf("Name        : %s\n",ptr->ename);
    printf("Designation : %s\n",ptr->desc);
    printf("Salary      : %f\n",ptr->sal);
    printf("---------------------------\n");

}


void main(){
    int n,i;
    printf("Enter number of employess");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        e[i]=getdata(i+1);
    }
    printf("\nEmployee Details\n");
    for(i=0;i<n;i++){
        showdata(e[i]);
    }
  getch();
}

