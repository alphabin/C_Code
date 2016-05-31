//CS36 - Program #10
//Name : Chatura Ahangama

/* NOTES
#PREPROCESSOR COMMANDS/DIRECTIVE
-start with # (no ;)
-processed before program runs
-3 directives
	1. #include < > - loads in needed headerfiles.
	2. symbolic constants
		eg. #define NUM 10 // for constants
		they are called symbolic constants
		because text substitution is done before program runs
	3. macro - identifier for a formula
*/


#include <stdio.h>
#include <stdlib.h>
#define NUM 10
#define TAXRATE 8.75

void main()
{
	int a,b;
	float c,d;
	
	c=20.0;
	b=0;
	(b++);

	d=TAXRATE/100*c;
	a=NUM+3;
	c=c*TAXRATE/100;

	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %.2f\n",c);
	printf("d = %.2f\n",d);

	//system("PAUSE");
	
}


/*
a = 13
b = 1
c = 1.75
d = 1.75
Press any key to continue . . .
*/