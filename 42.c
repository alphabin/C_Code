//CS36 - Program #42
//Name : Chatura Ahangama

/* NOTES
#STRUCT - collection of data of different types.

*/


#include <stdio.h>
#include <stdlib.h>

struct student //should declare global
{
	char name[20];
	int t1,t2,t3;
	float avg;
};

void main()
{
	student s;
	printf("Enter a name : ");
	gets(s.name);
	printf("Enter 3 scores : ");
	scanf("%d %d %d",&s.t1,&s.t2,&s.t3);
	s.avg = (s.t1+s.t2+s.t3)/(float)3;
	printf("%s %d %d %d %f\n",s.name,s.t1,s.t2,s.t3,s.avg);

	//system("PAUSE");
}



/*
Enter a name : Anthony
Enter 3 scores : 94 86 98
Anthony 94 86 98 92.666664
Press any key to continue . . .
*/
