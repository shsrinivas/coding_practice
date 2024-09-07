/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
 */

#include<stdio.h>
#include<stdlib.h>

struct student_rec
{
	int roll_no;
	char name[30];
	float avg;
	char grade;
};

int main()
{
	int noOfStu, noOfSub;
	char subjects[50];

	printf("Enter number of student: ");
	scanf("%d",&noOfStu);

	struct student_rec S[noOfStu];

	printf("Enter no.of subjects: ");
	scanf("%d",&noOfSub);

	char *s = malloc(noOfSub*20);
	char *temp = s;

	for (int i = 0; i < noOfSub; i++) {
		printf("Enter the subject name\n");
		scanf("%s", temp);
		temp += 20;
	}

	printf("\n\n");

#if 0
	temp = s;
	for (int i = 0; i < noOfSub; i++) {
		printf("%s\n", temp);
		temp += 20;
	}
#endif
	temp = s;

	int marks[20]={0};

	for(int i = 0 ; i < noOfStu ; i++)
	{
		printf("----------Enter the student datails-------------\n");
		printf("Enter the roll no of student %d: ",i+1 );
		scanf("%d",&S[i].roll_no);
		printf("Enter the name of student %d: ",i+1 );
		scanf("%s",S[i].name);
		for ( int j = 0 ; j < noOfSub ; j++ )
		{
			printf("Enter %s marks: ",temp);
			temp+=20;
			scanf("%d",&marks[i]);
		}
	}
	printf("\n");
	temp = s;
	for(int i = 0 ; i < noOfStu ; i++)
	{
		printf("----------------- Student datails-------------\n");
		printf("roll no of student %d: %d \n",i+1,S[i].roll_no );
		printf("name of student %d: %s \n",i+1,S[i].name );
		for ( int j = 0 ; j < noOfSub ; j++ )
		{
			printf("%s marks: %d\n",temp,marks[i]);
			temp+=20;
		}
	}
	return 0;

}


