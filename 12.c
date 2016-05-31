//CS36 - Program #12
//Name : Chatura Ahangama

/* NOTES
#If statement
-use to make decisions.
-Boolean(true or flase)
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int score;
	printf("Enter a score : ");
	scanf("%d",&score);
	if(score>=80&&score<=100)
		printf("Good\n");
	if(score>=55&&score<=79)
		printf("OK\n");
	if(score>=1&&score<=54)
		printf("Moron\n");
	/*
	else
		printf("Invalid\n");  //looks like it will work but not. 'else' is belong to 'if' just above it.
	*/                        //if enter 90 -> good\n Invalid
	if(score<1||score>100)
		printf("Invalid");
	

	//system("PAUSE");
}

/*
Enter a score : 24
Moron

*/