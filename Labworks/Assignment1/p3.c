#include<stdio.h>
#include<conio.h>
#include<string.h>
//Write a C program to read the roll no, name and Semester 
//Marks for 5 Subjects( each Semester) for 3 students  and 
//calculate the total percentage. The conditions must be followed 

struct student {
	int rollno;
	char name[10];
	float smarks[5];
	float perc;
	float totalMark;
	char markless;
	char status[20];
}s1,s2,s3;

struct student getData(){
	struct student s;
	int i,j;
	printf("Enter Name , RollNumber and Marks(Out of 100) in 5 Subjects in Order\n");
    gets(s.name);
	scanf("%d",&s.rollno);
	s.totalMark=0;
	s.markless='T';
	
	for(i=0;i<6;i++)
	{
		printf("Enter Marks in 5 subjects for Semester %d\n",i+1);
		for(j=0;j<5;j++){
			scanf("%f",&s.smarks[j]);
			if(s.smarks[j]>40.0){
				s.markless='F';	
			}
			s.totalMark+=s.smarks[j];
		}		
	}
	s.perc=(s.totalMark/3000)*100;
	
	
	if(s.perc>90 && s.perc<=100)
	{
		strcpy(s.status,"Outstanding");
	}
	else if(s.perc>80 && s.perc<=90)
	{
		strcpy(s.status,"First Class with Distinction");
	}
	else if(s.perc>60 && s.perc<=80)
	{
		strcpy(s.status,"First Class");	
	}
	else if(s.perc>40 && s.perc<=60)
	{
		strcpy(s.status,"Pass");	
	}
	else if(s.perc<=40 || s.markless=='T')
	{
		strcpy(s.status,"Fail" );	
	}
	return s;
	}
	
	
	
void showData(struct student s){
	printf("\n-----------Consolidated MarkList----------\n");
	printf("\tRoll No     : %d\n",s.rollno);
	printf("\tName        : %s\n",s.name);
	printf("\tPercentage  : %0.2f\n",s.perc);
	printf("\tTotal Marks : %0.2f\n",s.totalMark);
	printf("\tResult      : %s\n",s.status);
	printf("--------------------------------------------\n");
}	


void main(){
	printf("Enter Data for Student 1 :\n");
	s1 = getData();
	showData(s1);
	printf("Enter Data for Student 2 :\n");
	s2=getData();
	showData(s2);
    printf("Enter Data for Student 3 :\n");   
	s3=getData();
	showData(s2);
 getch();	
}





