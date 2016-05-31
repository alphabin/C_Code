//CS36 - Program #43
//Name : Chatura Ahangama


#define SIZE 3
#include <stdio.h>
#include <stdlib.h>

void load(struct student s[],int n); 
void passed(struct student s[],int n);
void print(struct student s[],int n);
void sortavg(struct student s[],int n);

struct student
{
	char last[15], first[10];
	int t1,t2,t3;
	float avg;
	char grade;
};

void main()
{
	student s[SIZE];
	load(s,SIZE);
	printf("\nEntered info :\n");
	print(s,SIZE);
	sortavg(s,SIZE);
	printf("\nSorted by Avg! \n");
	print(s,SIZE);


	//system("PAUSE");
}

void load(struct student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter last name : ");
		gets(s[i].last);
		printf("Enter first name : ");
		gets(s[i].first);
		printf("Enter 3 test scores : ");
		scanf("%d %d %d",&s[i].t1,&s[i].t2,&s[i].t3);
		s[i].avg = (s[i].t1+s[i].t2+s[i].t3)/(float)3;
		if(s[i].avg>=70)
			s[i].grade = 'P';
		else
			s[i].grade = 'F';
		printf("\n-------------\n");
		fflush(stdin);
	}
}

void sortavg(struct student s[],int n)
{
	int i,j;
	student t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j].avg<s[j+1].avg)
			{
				t = s[j];
				s[j] = s[j+1];
				s[j+1] = t;
			}
		}
	}
}

void passed(struct student s[],int n)
{
	int count=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(s[i].grade=='P')
			count++;
	}
	printf("Number of students who passes : %d\n",count);
}

void print(struct student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s %s\n",s[i].first,s[i].last);
		printf("%d %d %d\n",s[i].t1,s[i].t2,s[i].t3);
		printf("%.2f   %c\n",s[i].avg,s[i].grade);
	}
}

/*
Enter last name : Park
Enter first name : Jay
Enter 3 test scores : 89 78 63

-------------
Enter last name : Lombardi
Enter first name : Debbie
Enter 3 test scores : 87 78 99

-------------
Enter last name : Chen
Enter first name : Selina
Enter 3 test scores : 99
99 87

-------------

Entered info :
Jay Park
89 78 63
76.67   P
Debbie Lombardi
87 78 99
88.00   P
Selina Chen
99 99 87
95.00   P

Sorted by Avg!
Selina Chen
99 99 87
95.00   P
Debbie Lombardi
87 78 99
88.00   P
Jay Park
89 78 63
76.67   P
Press any key to continue . . .
*/