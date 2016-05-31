//CS36 - Program #26
//Name : Chatura Ahangama


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char findgrade(int s)
{
	if(s>=90&&s<=100)
		return 'A';
	if(s>=80&&s<=89)
		return 'B';
	if(s>=60&&s<=79)
		return 'C';
	if(s>=1&&s<=59)
		return 'D';
	return 'I';
}

void main()
{
	int s;
	printf("Enter a score : ");
	scanf("%d",&s);
	printf("Your grade is %c\n",findgrade(s));
	
	//char grade;
	//grade = findgrade(s);
	//printf("Your grade is %c\n",grade);
	
	//system("PAUSE");
}

/*
Enter a score : 89
Your grade is B
Press any key to continue . . .
*/