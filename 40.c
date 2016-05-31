//CS36 - Program #40
//Name : Chatura Ahangama


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char name[5][10]; //5 names length 10 chars including null char
	
	//load array
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter a value : ");
		gets(name[i]);
	}

	//sorting
	int j;
	char t[10];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(t,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],t);
			}
		}
	}

	//print
	for(i=0;i<5;i++)
		printf("%s\n",name[i]);
	printf("\n\n\n");

	//system("PAUSE");
}

/*
Enter a value : Brian
Enter a value : Anthony
Enter a value : Kevin
Enter a value : Esther
Enter a value : Jay
Anthony
Brian
Esther
Jay
Kevin



Press any key to continue . . .
*/