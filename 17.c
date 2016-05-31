//CS36 - Program #17
//Name : Chatura Ahangama


/* NOTES
Picking Random Number in a Range
Die 1 to 6
num = rand()%"high-low+1" + "low";
die = rand()%6+1;
range 2000 to 8000
num = rand()%6001+2000;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int a,b,c;
    
	time_t t;
    srand((unsigned)time(&t));
    
    a = rand();
    b = rand();
    c = rand();
    printf("%d %d %d\n",a,b,c);

    //system("PAUSE");
}

/*
13625 3726 23863
Press any key to continue . . .
*/

/*
13811 26561 26313
Press any key to continue . . . //results differ from time
*/