//CS36 - Program #11
//Name : Chatura Ahangama

#include <stdio.h>
#include <stdlib.h>
#define SUM (a+b+c)
#define AVG SUM/(float)3 //depending on compiler, (a+b+c)/(float)3

void main()
{
	int a,b,c;
	printf("Enter 3 numbers :");
	scanf("%d %d %d",&a,&b,&c);
	printf("sum is %d\n",SUM);
	printf("avg is %f\n",AVG);

	//system("PAUSE");
}

/*
Enter 3 numbers :10 25 49
sum is 84
avg is 28.000000

*/