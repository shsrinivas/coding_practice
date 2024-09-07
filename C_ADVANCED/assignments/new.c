/*
Name: Shreya Srinivas
Date: 24/04/2023
Description: WAP to find which day of the year.
Sample Input & Output:
user@emertxe] ./day_of_the_year
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
 */

#include<stdio.h>
int main()
{

	int total, start_day, Nth_day;
	printf("Enter the value of 'n': ");
	scanf("%d",&Nth_day);
	if (1 <= Nth_day && Nth_day <= 365)
	{
        //printf("num is between 1 and 7\n");
		printf("Choose First Day :\n");
		printf("1.Sunday\n");
		printf("2.Monday\n");
		printf("3.Tueday\n");
		printf("4.Wednesday\n");
		printf("5.Thursday\n");
		printf("6.Friday\n");
		printf("7.Saturday\n");
		printf("Enter the option to set the first day :");
		scanf("%d",&start_day);
		if (1 <= start_day && start_day <=7)
		{
			//printf("Num is between 1 and 365.\n");
			total=start_day+(Nth_day-1);
			if(total>7)
			{
				total=total%7;
			}
			switch(total)
			{
				case 1:
					printf("The day is Sunday\n");
					break;
				case 2:
					printf("The day is Monday\n");
					break;
				case 3:
					printf("The day is Tuesday\n");
					break;
				case 4:
					printf("The day is Wednesday\n");
					break;
				case 5:
					printf("The day is Thursday\n");
					break;
				case 6:
					printf("The day is Friday\n");
					break;
				case 7:
					printf("The day is Saturday\n");
					break;
			}

		}
		else
		{
			printf("Error: Invalid input, first day should be > 0 and <= 7.\n");
		}

    } 
	else 
	{
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }
}

