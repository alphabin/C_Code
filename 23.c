//CS36 - Program #23
//Name : Chatura Ahangama

/* NOTES
#String
String is like an array - collection of same kind,
can only be passed by reference, no way to pass by value.
NO ampersand on call
USE char * in parameters list
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void load(char *f,char *l)
{
	printf("Enter first name : ");
	gets(f);
	printf("Enter last name : ");
	gets(l);
}

void main()
{
	char first[15],last[20];
	load(first,last);
	printf("%s %s\n",first,last);
	system("PAUSE");
}

/*
Enter first name : Anthony
Enter last name : Park
Anthony Park
Press any key to continue . . .
*/