//CS36 - Program #13
//Name : Chatura Ahangama


/* NOTES
#Relational Operators
==      
!=
<
<=
>
>=

int x=5;
if(!(x==6))

#Logical Operators
!  - not
&& - and
|| - or
*/



#include <stdio.h>
#include <stdlib.h>

void main()
{
	int score;
	printf("Enter a score : ");
	scanf("%d",&score);
	
	if(score<1||score>100)
		printf("Invalid\n");
	else
		if(score>=80)
			printf("Good\n");
		else
			if(score>=55)
				printf("OK\n");
			else
				printf("Moron\n");

	//system("PAUSE");
}

/*
Enter a score : 73
OK
Press any key to continue . . .
*/