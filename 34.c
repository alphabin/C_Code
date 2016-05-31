//CS36 - Program #34
//Name : Chatura Ahangama

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num,sum=0,count=0;
	float avg;
	printf("Enter a number, any text to quit : ");
	for(;scanf("%d",&num);count++)  //This is not a good loop just showing that it can be done
	{
		sum += num;
		printf("Enter a number, any text to quit : ");
	}

	printf("Sum : %d\n",sum);
	//system("PAUSE");
}

/*
Enter a number, any text to quit : 10
Enter a number, any text to quit : 20
Enter a number, any text to quit : 30
Enter a number, any text to quit : g
Sum : 60
Press any key to continue . . .
*/