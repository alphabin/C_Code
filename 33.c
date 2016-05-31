//CS36 - Program #33
//Name : Chatura Ahangama


//Sum and avg until user enters -999

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num,sum=0,count=0;
	float avg;
	printf("Enter a number, -999 to quit : ");
	scanf("%d",&num);
	for( ; num!=-999 ; count++)
	{
		sum += num;
		printf("Enter a number, -999 to quit : ");
		scanf("%d",&num);
	}
	if(count)
	{
		avg = sum/(float)count;
		printf("%d %f\n",sum,avg);
	}
	else
		printf("No data entered\n");

	//system("PAUSE");
}

/*
Enter a number, -999 to quit : -999
No data entered
Press any key to continue . . .
*/

/*
Enter a number, -999 to quit : 10
Enter a number, -999 to quit : 20
Enter a number, -999 to quit : 30
Enter a number, -999 to quit : 40
Enter a number, -999 to quit : 50
Enter a number, -999 to quit : -999
150 30.000000
Press any key to continue . . .
*/