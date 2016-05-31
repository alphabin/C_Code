//CS36 - Program #21
//Name : Chatura Ahangama


/* NOTES
#Parameter - value passed to a function so that function can perform its task
           - functions need to communicate to one another - so parameters passing

#2ways of parameters
           1. value parameter - one way communication
                              - local copy is made
           2. reference parameter(&,*) - 2-way communication
                                       - used when function changes value of parameter.
*/

#define _CRT_SECURE_NO_WANRINGS_
#include <stdio.h>
#include <stdlib.h>

void load(int *a,int *b,int *c)
{
	printf("Enter 3 numbers : ");
	scanf("%d %d %d",&(*a),&(*b),&(*c));
}

void calc(int a,int b,int c, int *sum, float *avg)
{
	*sum = a + b + c;
	*avg = *sum/(float)3;
}

void print(int a, int b, int c, int sum, float avg)
{
	printf("The 3 numbers are %d %d %d\n",a,b,c);
	printf("The sum is %d\n",sum);
	printf("The average is %f\n",avg);
}

void main()
{
	int a,b,c,sum;
	float avg;
	load(&a,&b,&c);
	calc(a,b,c,&sum,&avg);
	print(a,b,c,sum,avg);

	//system("PAUSE");
}

/*
Enter 3 numbers : 10 20 30
The 3 numbers are 10 20 30
The sum is 60
The average is 20.000000
Press any key to continue . . .
*/