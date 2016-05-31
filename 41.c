//CS36 - Program #41
//Name : Chatura Ahangama


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void load(char a[][10])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter a name : ");
		gets(a[i]);
	}
}

void sort(char a[][10])
{
	int i,j;
	char t[10];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
}

void print(char a[][10])
{
	int i;
	for(i=0;i<5;i++)
		printf("%s\n",a[i]);
	printf("\n");
}

void main()
{
	char name[5][10];
	
	load(name);
	sort(name);
	print(name);

	//system("PAUSE");
}

/*
Enter a name : Kevin
Enter a name : Esther
Enter a name : Irvinn
Enter a name : Adreas
Enter a name : Cathy
Adreas
Cathy
Esther
Irvinn
Kevin

Press any key to continue . . .
*/