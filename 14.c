//CS36 - Program #14
//Name : Chatura Ahangama



#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num;
	printf("Enter an integer(1-10) : ");
	scanf("%d",&num);
	
	switch(num)
	{
	case 1:
	case 2:
	case 3: printf("Low\n");
		break;
	case 4: case 5: case 6: case 7: printf("medium\n");
		break;
	case 8: case 9: case 10: printf("high\n");
		break;
	default : printf("Invalid\n");
	}

	//system("PAUSE");
}

/*
Enter an integer(1-10) : 6
medium
Press any key to continue . . .
*/
