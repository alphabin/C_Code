//CS36 - Program #16
//Name : Chatura Ahangama


/* NOTES
#Random Numbers
-games
-statistics
-Based on the computer's system clock
 and mathematical formula.
rand() - pick random int from 0 to 32767(positive numbers only)
       - found in stdlib.h
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,c;
	a = rand();
	b = rand();
	c = rand(); //atually need to seed them
	printf("%d %d %d\n",a,b,c);

	//system("PAUSE");
}

/*
41 18467 6334
Press any key to continue . . .
*/