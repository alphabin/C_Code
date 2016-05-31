//CS36 - Program #37
//Name : Chatura Ahangama

//Pass arrays to functions - only be passed by reference

#include <stdio.h>
#include <stdlib.h>
#define size 5
 
void load(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a number : ");
		scanf("%d",&a[i]);
	}
}

void print(int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d",b[i]);
	printf("\n\n\n");
	
}

void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void main()
{
	int a[size];
	
	load(a,size);
	print(a,size);
	sort(a,size);
	print(a,size);


	//system("PAUSE");
}

/*
Enter a number : 4
Enter a number : 7
Enter a number : 9
Enter a number : 5
Enter a number : 2
47952


24579


Press any key to continue . . .
*/