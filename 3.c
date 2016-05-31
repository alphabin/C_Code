//CS36 - Program #3
//Name : Chatura Ahangama


//get sum and average of three numbers

/* NOTES
#Data Type
char		  :        -128 to 127
unsigned int  :           0 to 65535
signed int	  :      -32768 to 32767
unsigned long :           0 to 4294967295
signed long   : -2147483648 to 2147483647
float         :3.4 X 10^-38 to 3.4 X 10^38
double        : 1.7X10^-308 to 1.7 X 10^308

#Non Whole Numbers
float  - 7 digits of accuracy
double - 15 digits of accuracy
char   - one character (1byte)
string - collection of characters
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	//declaration
	int a,b,c;
	int sum;
	float avg;

	//input
	a=10;
	b=20;
	c=30;

	//calculations
	sum = a+b+c;
	avg = sum/3;

	//output
	printf("The 3 numbers are %d %d %d\n",a,b,c);
	printf("The sum is %d\n",sum);
	printf("The average is %f\n",avg);

	//system("PAUSE");
}

/*
The 3 numbers are 10 20 30
The sum is 60
The average is 20.000000
Press any key to continue . . .
*/
