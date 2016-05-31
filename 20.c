//CS36 - Program #20
//Name : Chatura Ahangama


/* NOTES
#Scope of Variables
Global variables - declare out side the functions
                 - can be used anywhere in the program
                 - scope(boundary) everywhere in program
                 - NO GLOBAL VARIABLES ALLOWED - why? side effect
Local variables  - declared inside the functions
                 - can only be used in function where declared
                 - scope only in function declared
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int a,b,c,sum;
float avg;

void load();
void calc();
void print(); //prototype

void main()
{
    load();
    calc();
    print();

    //system("PAUSE");
}


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

/*
Enter 3 values : 10 20 30
The 3 numbers are : 10 20 30
The sum is 60
The average is 20.000000
Press any key to continue . . .
*/