//CS36 - Program #15
//Name : Chatura Ahangama


#include <stdio.h>
#include <stdlib.h>

void main()
{
	char c;
	printf("Enter a character : ");
	scanf("%c",&c);
	switch(c)
	{
	case 'g' :
	case 'G' : printf("Good\n");
		break;
	case 'f' : case 'F' : printf("Fair\n");
		break;
	case 'b' : case 'B' : printf("Bad\n");
		break;
	default : printf("Invalid\n");
	}
	
	//system("PAUSE");
}
	
/*
Enter a character : G
Good
Press any key to continue . . .
*/
