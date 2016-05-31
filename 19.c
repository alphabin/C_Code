//CS36 - Program #19
//Name : Chatura Ahangama


/*NOTES
#FUNCTIONS
-break up your program into manageable pieces or modules
-each programmer is assigned a function to write
-each function should be around 35-50 lines of codes

#2 ways to write functions
-you can put fuctions first with main at the end
-put main first followed by functions but you must prototype(declare)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int a,b,c,sum;
float avg;

void load()
{
    printf("Enter 3 values : ");
    scanf("%d %d %d",&a,&b,&c);
}

void calc()
{
    sum = a+b+c;
    avg = sum/(float)3;
}

void print()
{
    printf("The 3 numbers are : %d %d %d\n",a,b,c);
    printf("The sum is %d\nThe average is %f\n",sum,avg);
}

void main()
{
    load();
    calc();
    print();

    //system("PAUSE");
}

/*
Enter 3 values : 10 20 30
The 3 numbers are : 10 20 30
The sum is 60
The average is 20.000000
Press any key to continue . . .
*/