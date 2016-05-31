//CS36 - Program #29
//Name : Chatura Ahangama


/* NOTES
DO Loop
-exit controlled, Indeterministic

ex . Let user enter a value from 1 to 5

do
{
	printf("Enter a value from 1 to 5 : ");
	scanf("%d",&num);
}while(num<1||num>5);
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, sum=0,count=0;
	float avg;
	printf("Enter a value : ");
	scanf("%d",&num);
	do
	{
		sum += num;
		count++;
		printf("Enter a value : ");
		scanf("%d",&num);
	}while(num!=-999);
	
	avg = sum/(float)count;
	printf("Sum : %d\nAvg : %f\n",sum,avg);

	//system("PAUSE");
}

/*
Enter a value : 50
Enter a value : 60
Enter a value : 70
Enter a value : -999
Sum : 180
Avg : 60.000000
Press any key to continue . . .
*/



