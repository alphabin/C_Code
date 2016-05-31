//CS36 - Program #7
//Name : Chatura Ahangama

//string,scanf,fflush(),gets()

/* NOTES
#gets(name) : use it if space between characters
              no white space for scanf
#fflush(stdin) to erase 'enter key' entered on buffer right before
*/

// Dont need in the Linux #define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,c,sum;
	float avg;
	char name[10];

	printf("Enter a name : ");
	//scanf("%s",name); //use gets(name) if space between
	gets(name);

	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);

	//printf("enter all numbers:");
	//scanf("%d %d %d",&a,&b,&c);

	sum=a+b+c;
	avg=sum/(float)3; //3.0 - not good 
	
	printf("Hello %s\n",name);
	printf("sum for %d %d %d is\n",a,b,c);
	printf("The sum is %d\n",sum);
	printf("The averager is %f\n\n\n",avg);
	
	//do it second time
	fflush(stdin);
	
	printf("Enter a name : ");
	gets(name);

	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);

	sum=a+b+c;
	avg=sum/(float)3; //3.0 - not good 
	
	printf("Hello %s\n",name);
	printf("sum for %d %d %d is\n");
	printf("The sum is %d\n",sum);
	printf("The averager is %f\n\n\n",avg);

	
	//system("pause");

}

/*
Enter a name : Joe cole
Enter first number : 20
Enter second number : 30
Enter third number : 40
Hello Joe cole
sum for 20 30 40 is
The sum is 90
The averager is 30.000000


Enter a name : Kunhee Park
Enter first number : 40
Enter second number : 20
Enter third number : 12
Hello Kunhee Park
sum for 0 0 2130567168 is
The sum is 72
The averager is 24.000000


Press any key to continue . . .
*/