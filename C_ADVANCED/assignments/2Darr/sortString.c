/*
Name: Shreya Srinivas
Date: 19-07-2023
Description: Read n & n person names of maxlen 20. Sort and print the names
Sample Exe:
Enter the size: 5

Enter the 5 names of length max 20 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai

The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
*/

#include<stdio.h>
#include<stdlib.h>

char* my_strcpy(char* dest, const char* src)
{
	//Copy source to destination
    char* result = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate the destination string
    return result;
}

int my_strcmp(const char* str1, const char* str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
            return (*str1 > *str2) ? 1 : -1;

        str1++;
        str2++;
    }

    // Strings are equal up to this point, check for the end of both strings
    if (*str1 == '\0' && *str2 == '\0')
        return 0;
    else if (*str1 == '\0')
        return -1; // str1 is shorter
    else
        return 1; // str2 is shorter
}

int main()
{
	int size;
	printf("Enter the size: ");   //Reading num of rows from user 
	scanf("%d",&size);
	char (*s)[32];  //Creating FSSD array , with col len = 32 fixed
	s = malloc(sizeof(*s) * size); //sizeof(*s) = sizeof(char)*32, malloc(32 * size)

	printf("Enter the %d names of length max 20 characters in each\n",size);
	for ( int i = 0 ; i < size ; i ++)
	{
		printf("[%d] -> ",i);
		scanf(" %s",s[i]);        //Reading strings from user
	}
	/*
	printf("Before sorting : \n");

	for ( int i = 0 ; i < size ; i ++)
	{
		printf("%s\n",s[i]);
	}
	*/

	char temp[32];
	//Logic to swap strings
	for(int i = 0 ; i < size - 1 ; i ++)
	{
		for(int j = 0 ; j < size - 1 ; j ++)
		{
			if(my_strcmp(s[j], s[j+1]) > 0)//(s[j] > s[j+1]) 
			{
				my_strcpy(temp,s[j]);
				my_strcpy(s[j],s[j+1]);
				my_strcpy(s[j+1],temp);
			}
		} 
	}
	printf("The sorted names are: \n");

	for ( int i = 0 ; i < size ; i ++)
	{
		printf("%s\n",s[i]);
	}
}


