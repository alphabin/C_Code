//CS36 - Program #32
//Name : Chatura Ahangama


//More determinisitc FOR loop
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num,big,i;
	printf("Enter a nember : ");
	scanf("%d",&big);
	for(i=2;i<=10;i++)
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		if(num>big)
			big = num;
	}
	printf("Find Biggest : %d\n",big);
	
	//system("PAUSE");
}

/*
Enter a nember : 13
Enter a number : 25
Enter a number : 36
Enter a number : 74
Enter a number : 23
Enter a number : 53
Enter a number : 85
Enter a number : 78
Enter a number : 56
Enter a number : 35
Find Biggest : 85
Press any key to continue . . .
*/