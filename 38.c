//CS36 - Program #38
//Name : Chatura Ahangama

//2-D array

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int b[2][3];
	int row,col;
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("Enter a number : ");
			scanf("%d",&b[row][col]);
		}
	}

	//print array

	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d",b[row][col]);
			printf("\n\n\n");
		}
	}

	//system("PAUSE");
}

/*
Enter a number : 3
Enter a number : 5
Enter a number : 6
Enter a number : 8
Enter a number : 9
Enter a number : 10
3


5


6


8


9


10


Press any key to continue . . .
*/