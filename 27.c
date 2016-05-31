//CS36 - Program #27
//Name : Chatura Ahangama


/* NOTES
#Loop - section of code that's done many times
3 looping statement in C/C++
while - indeterministic, entrace controlled
do    - indeterministic, exit controlled
for   - deterministic or indeterministic, entrace controlled

deterministic - number of times to do loop is known
indeterministic - number of times to do loop is unknown
                - to quit : ctrl-c, break; use a flag/sentnel (let user enter -999 or 'zzz' to quit

entrance controlled - condition to do loop is at the top - minimum number of execution to do loop is 0 or more
exit controlled - condition to do loop is at the bottom  - minimum number of execution to do loop is 1 or more

# WHILE LOOP
indeterministic, entrance controlled
*/

//Find sum and avg until user enters -999

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, sum=0, count=0;
	printf("Enter a value, -999 to quit : ");
	scanf("%d",&num);
	while(num!=-999)
	{
		sum += num;
		count++;
		printf("Enter a value, -999 to quit : ");
		scanf("%d",&num);
	}
	if(count!=0)
	{
		float avg;
		avg = sum/(float)count;
		printf("Sum : %d\nAvg : %f\n",sum,avg);
	}
	else
		printf("No data Entered\n");

	//system("PAUSE");
}


/*
Enter a value, -999 to quit : 10
Enter a value, -999 to quit : 20
Enter a value, -999 to quit : 30
Enter a value, -999 to quit : -999
Sum : 60
Avg : 20.000000
Press any key to continue . . .
*/

