//CS36 - Program #28
//Name : Chatura Ahangama


//Find the largest number in a series of numbers until user enters a -999 to quit

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num,large;
	printf("Enter a value : ");
	scanf("%d",&large);
	printf("Enter a value : ");
	scanf("%d",&num);
	while(num!=-999)
	{
		if(num>large)
			large=num;
		printf("Enter a value : ");
		scanf("%d",&num);
	}
	printf("The largest value : %d\n",large);
	
	//system("PAUSE");
}

/*
Enter a value : 124
Enter a value : 231
Enter a value : 242
Enter a value : 552
Enter a value : 234
Enter a value : -999
The largest value : 552
Press any key to continue . . .
*/