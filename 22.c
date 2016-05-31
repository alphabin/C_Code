//CS36 - Program #22
//Name : Chatura Ahangama


/* NOTES
#Parameter - Value passed to a function so that function can perform its job
           - pass by value & pass by reference
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void main()
{
	int x = 20, y = 10;
	printf("%d %d\n",x,y);
	swap(&x,&y);
	printf("%d %d\n",x,y);
	
	system("PAUSE");
}

/*
20 10
10 20
Press any key to continue . . .
*/