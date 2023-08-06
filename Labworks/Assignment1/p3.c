#include<stdio.h>
#include<conio.h>
#include<string.h>
//Write a C program to read the roll no, name and Semester 
//Marks for 5 Subjects( each Semester) for 3 students  and 
//calculate the total percentage. The conditions must be followed 

struct student {
	int rollno;
	char name[10];
	float mark[5];
}s1,s2,s3;

struct student getData(){
	struct student s;
	printf("Enter Name , RollNumber and Marks(Out of 100) in 5 Subjects in Order\n");
    gets(s.name);
	scanf("%d",&s.rollno);
	scanf("%f%f%f%f%f",&s.mark[0],&s.mark[1],&s.mark[2],&s.mark[3],&s.mark[4]);
	return s;
	}
	
void showData(struct student s){
	printf("Roll No   : %d\n",s.rollno);
	printf("Name      : %s\n",s.name);
	printf("Subject 1 : %f\n",s.mark[0]);
	printf("Subject 2 : %f\n",s.mark[1]);
	printf("Subject 3 : %f\n",s.mark[2]);
	printf("Subject 4 : %f\n",s.mark[3]);
	printf("Subject 5 : %f\n",s.mark[4]);
}	
	
void calcPercentage(struct student s){
	float perc;
	bool markless;
	perc=(s.mark[0]+s.mark[1]+s.mark[2]+s.mark[3]+s.mark[4])/100;
	if(s.mark[0]<=40 && s.mark[1]<=40 &&s.mark[2]<=40 &&s.mark[3]<=40 &&s.mark[4]<=40)
	  markless = true;
	if(markless&& perc<=40)
		printf("Fail w") 
	
	
	
	
	
		
	}

void main(){
	printf("Enter Data for Student 1 :\n");
	s1 = getData();
//	printf("Enter Data for Student 2 :\n");
//	s2 = getData();
//	printf("Enter Data for Student 3 :\n");
//	s3 = getData();
	
	showData(s1);
//	showData(s2);
//	showData(s3);
	
 getch();	
}





