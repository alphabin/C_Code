//CS36 - Program #36
//Name : Chatura Ahangama

/* NOTES
#DATA STRUCTURES - collection of DATA
 a) array - collection of data of same type.
 b) struct - stucture
           - collection of Data of different types
ARRAYS can be passed by reference ONLY
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a[5], i;
	for(i=0;i<5;i++)
	{
		printf("Enter a number : ");
		scanf("%d",&a[i]);
	}
	
	int sum=0;
	float avg;
	
	for(i=0;i<5;i++)
		sum += a[i];
	avg = sum/(float)5;
	
	printf("Sum : %d Avg : %f\n",sum,avg);

	//system("PAUSE");
}

/*
Enter a number : 2
Enter a number : 4
Enter a number : 5
Enter a number : 6
Enter a number : 7
Sum : 24 Avg : 4.800000
Press any key to continue . . .
*/
