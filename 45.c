//CS36 - Program #45
//Name : Chatura Ahangama

/* NOTES
#Text Files - can see data in editor
            - format text file
			- (bad thing)save one data element a time
#Binary Files - can save whole data structure with one line of code
			  - (bad thing) cannot view data in text editor
			  - Binary files - fread/fwrite
*/


#define SIZE 2
#include <stdio.h>
#include <stdlib.h>

struct student
{
	char last[15];
	char first[10];
	int t1,t2,t3;
	float avg;
	char grade;
};

void load(struct student s[],int n);
void print(struct student s[],int n);
void sort(struct student s[],int n);
void passed(struct student s[],int n);
void savetext(struct student s[],int n);
void gettext(struct student s[],int n);
void savebin(struct student s[],int n);
void getbin(struct student s[],int n);

void main()
{
	student s[SIZE];
	load(s,SIZE);
	print(s,SIZE);
	sort(s,SIZE);
	print(s,SIZE);
	savetext(s,SIZE);
	gettext(s,SIZE);
	savebin(s,SIZE);
	getbin(s,SIZE);

	//system("PAUSE");

}

void load(struct student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the last name : ");
		gets(s[i].last);
		printf("Enter the first name : ");
		gets(s[i].first);
		printf("Enter 3 test scores : ");
		scanf("%d %d %d",&s[i].t1,&s[i].t2,&s[i].t3);
		s[i].avg = (s[i].t1+s[i].t2+s[i].t3)/(float)3;
		if(s[i].avg>=70)
			s[i].grade = 'P';
		else
			s[i].grade = 'F';
		printf("\n\n");
		fflush(stdin);
	}
}

void print(struct student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n-----Print-----\n");
		printf("%s %s\n",s[i].first,s[i].last);
		printf("Test scores : %d %d %d\n",s[i].t1,s[i].t2,s[i].t3);
		printf("Avg : %f   Grade : %c\n",s[i].avg,s[i].grade);
	
		printf("\n\n");
		
	}
}

void sort(struct student s[],int n)
{
	int i,j;
	student t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j].avg<s[j+1].avg)
			{
				t=s[j];
				s[j] = s[j+1];
				s[j+1] = t;
			}
		}
	}
	printf("\nSorted!!\n");
}

void passed(struct student s[],int n)
{
	int count = 0;
	int i;
	for(i=0;i<n;i++)
	{
		if(s[i].grade=='P')
			count++;
	}
	printf("The number of passed : %d\n",count);
}

void savetext(struct student s[],int n)
{
	int i;
	FILE *f;
	f=fopen("./student.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(f,"%s\n",s[i].last);
		fprintf(f,"%s\n",s[i].first);
		fprintf(f,"%d %d %d %f %c\n",s[i].t1,s[i].t2,s[i].t3,s[i].avg,s[i].grade);
	}
	fclose(f);
}

void gettext(struct student s[],int n)
{
	int i;
	FILE *f;
	f=fopen("./student.txt","r");
	for(i=0;i<n;i++)
	{
		fgets(s[i].last,sizeof(s[i].last),f);
		fgets(s[i].first,sizeof(s[i].first),f);
		fscanf(f,"%d %d %d %f %c",&s[i].t1,&s[i].t2,&s[i].t3,&s[i].avg,&s[i].grade);
	}
}

void savebin(struct student s[],int n)
{
	FILE *f;
	f = fopen("./student.txt","wb");
	fwrite(&s,sizeof(s[0]),n,f);
	fclose(f);
}

void getbin(struct student s[],int n)
{
	FILE *f;
	f=fopen("./student.txt","rb");
	fread(&s,sizeof(s[0]),n,f);
	fclose(f);
}

