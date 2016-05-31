//CS36 - Program #6
//Name : Chatura Ahangama

//scanf

/* NOTES
#Type specifier for scanf
d  int
i  int      (integer in dec, octal)
u  unsigned (unsigned decimal integer)
x  int      (hex integer)
c  char     (no '\0' added)
s  string   (w/a '\0')
f  float
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main()
{
	int a, b, c;
	
	
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	printf("Enter third number ");
	scanf("%d",&c);
	

	/*
	printf("Enter three numbers :");
	scanf("%d %d %d",&a,&b,&c);
	*/

	printf("3 numbers you entered are : %d %d %d\n",a,b,c);
	
	//system("PAUSE");
}

/* Result with the first portion	
Enter first number 20
Enter second number 30
Enter third number 40
3 numbers you entered are : 20 30 40
Press any key to continue . . .
*/

/* Result with the second portion
Enter three numbers :20 30 40
3 numbers you entered are : 20 30 40
Press any key to continue . . .
*/


