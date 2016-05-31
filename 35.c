//CS36 - Program #35
//Name : Chatura Ahangama

/* NOTES
The expression computes number of times that a for loop will be executed

floor((final value - initial value)/increment) + 1 [floor - drop down decimal and go down]

for(k=5;k<=83;k+=4) ->(83-5)/4 + 1
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i;
	
	for(i=0;i<10;i++)
		printf("i in FOR loop : %d\n",i);
	printf("i after FOR loop : %d\n",i);


	//system("PAUSE");
}

/*
i in FOR loop : 0
i in FOR loop : 1
i in FOR loop : 2
i in FOR loop : 3
i in FOR loop : 4
i in FOR loop : 5
i in FOR loop : 6
i in FOR loop : 7
i in FOR loop : 8
i in FOR loop : 9
i after FOR loop : 10
Press any key to continue . . .
*/
