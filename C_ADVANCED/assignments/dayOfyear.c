/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
 */

#include<stdio.h>

int main()
{
	int total, start_day, Nth_day;
	printf("Enter the value of 'n':");
	scanf("%d",&Nth_day);
	if(1>=Nth_day && Nth_day>=7)
	{
		printf("Error: Invalid input, first day should be > 0 and <= 7\n");
	}
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
	else if(1>=start_day && start_day>=365)
	{
		printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
	}

	else
	{

		/*
		   if(1<=start_day<=365)
		   {
		   if(1<=Nth_day<=7)
		   {
		 */
		total=start_day+(Nth_day-1);
		//printf("Total=%d\n",total);

		if(total>7)
		{
			//printf("Total greater than 7\n");
			total=total%7;
			//printf("Tot=%d\n",total);
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
	/*
	   else
	   {
	   printf("Error: Invalid input, first day should be > 0 and <= 7\n");
	   }
	   }
	   else
	   {
	   printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
	   }
	 */
}

