/*
Name: Shreya Srinivas
Date: 30-06-2023
Description: WAP to Implement the student record using array of structures
Sample Execution:
user@emertxe] ./student_record
Enter no.of students : 2
Enter no.of subjects : 2
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Science
----------Enter the student datails-------------
Enter the student Roll no. : 1
Enter the student 1 name : Nandhu
Enter Maths mark : 99
Enter Science mark : 91
----------Enter the student datails-------------
Enter the student Roll no. : 2
Enter the student 2 name : Bindhu
Enter Maths mark : 88
Enter Science mark : 78
----Display Menu----
1. All student details
2. Particular student details
Enter your choice : 2

----Menu for Particular student----
1. Name.
2. Roll no.
Enter you choice : 1
Enter the name of the student : Nandhu
Roll No.   Name           Maths         Science       Average       Grade
1              Nandhu        99               91                95                  A
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char calculateGrade(float mark);
struct student_rec     //creating a structure for student rec
{
	int roll_no;
	char name[30];
	float avg;
	char grade;
};

int main()
{
	int noOfStu, noOfSub;

	printf("Enter number of student: ");
	scanf("%d",&noOfStu);     // reading no of students

	struct student_rec S[noOfStu];

	printf("Enter no.of subjects: ");
	scanf("%d",&noOfSub);    //reading no of subjects

	char subjects[10][20];  //creating array of string 
	char (*ptr)[20];        
	ptr = subjects;         //ptr holds the addr of subjects

	for (int i = 0; i < noOfSub; i++) {   //reading subjects
		printf("Enter the name of subject %d: ",i+1);
		scanf("%s", ptr[i]);
	} 

	int marks[20]={0};        //Creating an array to store marks
	static int k = 0;

	for(int i = 0 ; i < noOfStu ; i++)    //Reading student details
	{
		printf("----------Enter the student datails-------------\n");
		printf("Enter student %d roll no: ",i+1 );
		scanf("%d",&S[i].roll_no);    //Reading roll no
		printf("Enter student %d name: ",i+1 );
		scanf("%s",S[i].name);        //Reading name
		for ( int j = 0 ; j < noOfSub ; j++ ) 
		{
			printf("Enter %s mark: ",ptr[j]);
			scanf("%d",&marks[k++]);  //Reading marks of all subjects
		}
	}

	/*
	for( int i = 0; i < k ; i ++)
	{
		printf("%d ",marks[i]);
	}	
	printf("\n");
	*/

	float avg[50] = {0};
	int sum = 0;
	static int l = 0;

	//printf("========Cal Avg=========\n");
	for (k = 0; k < (noOfSub * noOfStu); k++)     //Calculating avg marks of each student
	{
		sum = 0;
		for (int i = 0; i < noOfSub; i++)
		{
			sum += marks[k * noOfSub + i];
		}
		avg[l++] = (float)sum / noOfSub;
    }
	for (int i = 0; i < noOfStu; i++)    //Calculating the grade according to avg
	{
		S[i].avg = avg[i];
		S[i].grade = calculateGrade(avg[i]);  
	}
	/*
	printf("\n");
	for (int i = 0; i < noOfStu; i++)  
	{
    	printf("%.2f ", S[i].avg);
    	printf("%c ", S[i].grade);
	}

	printf("\n");
	*/

	int choice,option;
	printf("----Display Menu----\n");        //Displaying the menu
	printf("1. All student details\n");      //For displaying all student info
	printf("2. Particular student details\n");  //One stu info
	printf("Enter your choice : ");   //Reading user choice
	scanf("%d",&choice);
	char stu[30]; 
	int roll;
	
	switch(choice){
		case 1:
			printf("----All student details----\n");
			printf("Roll No. Name\t");               //Printing template
			for (int i = 0; i < noOfSub; i++) {
				printf("%s\t",ptr[i]);
			}
			printf("Average\tGrade\n");
			static int p = 0;

			for(int i = 0 ; i < noOfStu ; i++)    //Printing info with respect to template
			{

				printf("%d\t %s\t",S[i].roll_no,S[i].name);				
				for ( int  j = 0; j < noOfSub ; j++)
				{
					printf("%d\t",marks[p++]);
				}
				printf("%.2f\t%c\n",S[i].avg,S[i].grade);
			}
			break;
		case 2:
			printf("----Menu for Particular student----\n");
			printf("1. Name\n");
			printf("2. Roll no.\n");
			printf("Enter your choice: ");
			scanf("%d",&option);
			switch(option)
			{
				//user will either enter roll no or name of student for which we need ot display details
				case 1:
					printf("Enter the name of the student: ");
					scanf(" %s",stu);     //Checking which student info has to be displayed
					int index,q;
					for ( int i = 0 ; i < noOfStu ; i ++ )
					{
						if( !strcmp(stu,S[i].name) )   //checking the index of student acc to name entered
						{
							index = i;   //index will tell the serial no of student .
							break;
						}
					}
					q = index * (noOfSub) ; 
					printf("Roll No. Name\t");   //Printing template
					for (int i = 0; i < noOfSub; i++) {
						printf("%s\t",ptr[i]);
					}
					printf("Average\tGrade\n");
					printf("%d\t %s\t",S[index].roll_no,S[index].name);				
					for ( int  j = 0; j < noOfSub ; j++)   //Printing info acc to template
					{
						printf("%d\t",marks[q++]);
					}
					printf("%.2f\t%c\n",S[index].avg,S[index].grade);
					break;
				case 2:
					printf("Enter roll no of the student: ");
					scanf("%d",&roll);
					int index1,q1;
					for ( int i = 0 ; i < noOfStu ; i ++ )
					{
						if( roll == S[i].roll_no)   //checking the index of student according to roll no entered
						{
							index1 = i;
							break;
						}
					}
					q1 = index1 * (noOfSub) ; 
					printf("Roll No. Name\t");   //Printing template
					for (int i = 0; i < noOfSub; i++) {
						printf("%s\t",ptr[i]);
					}
					printf("Average\tGrade\n");
					printf("%d\t %s\t",S[index1].roll_no,S[index1].name);				
					for ( int  j = 0; j < noOfSub ; j++)   //Printing info acc to template
					{
						printf("%d\t",marks[q1++]);
					}
					printf("%.2f\t%c\n",S[index1].avg,S[index1].grade);
					break;
			}
			break;
	}

	return 0;
			
}


char calculateGrade(float mark) {
    if (mark >= 90.0) {
        return 'A';
    } else if (mark >= 80.0) {
        return 'B';
    } else if (mark >= 70.0) {
        return 'C';
    } else if (mark >= 60.0) {
        return 'D';
    } else {
        return 'F';
    }
}

