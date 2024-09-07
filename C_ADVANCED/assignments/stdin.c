/*
Name: Shreya Srinivas
Date: 15-0602023
Description: WAP to count no. of characters, words and lines, entered through stdin
Sample Input:
 ./my_wc
Hello world
Dennis Ritchie
Linux
Sample Output:

 */

#include<stdio.h>

int main()
{
	int new_line = 0, tot_char = 0, words = 0;
	char ch,backup;
	while( (ch = getchar()) != EOF ){
		tot_char+=1;              //Incrementing char count
		if( ch == '\n' ){
			new_line += 1;        //Inc new line count
		}
		if ( ch == '\n' || ch == '\t' || ch == ' ' ){
			if( backup == '\n' || backup == '\t' || backup == ' ')
				continue;
			else
				words+=1;        //Inc word count
		}
		backup = ch;    //storing prev char as backup to check for multiple spaces, tabs or new lines.
	}
	printf("\n");
	printf("\t%d\t%d\t%d\n",new_line,words,tot_char);
	//printf("total chars: %d\n", tot_char);
	//printf("num of lines: %d\n", new_line);
	//printf("num of words: %d\n", words);
}


