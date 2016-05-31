//CS36 - Program #18
//Name : Chatura Ahangama


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int d1,d2,sum;
    time_t t;
    srand((unsigned)time(&t));
    
	d1 = rand()%6+1;
    d2 = rand()%6+1;
    sum = d1+d2;

    printf("The first die is %d\n",d1);
    printf("The second die is %d\n",d2);
    printf("The sum of the two dies is %d\n",sum);

    //system("PAUSE");
}

/*
The first die is 5
The second die is 4
The sum of the two dies is 9
Press any key to continue . . .
*/

/*
The first die is 1
The second die is 5
The sum of the two dies is 6
Press any key to continue . . .
*/