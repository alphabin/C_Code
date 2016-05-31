//CS36 - Program #25
//Name : Chatura Ahangama


/* NOTES
#Non-void functions
It returns exactly one value(requires a return statement)
*/

#include <stdio.h>
#include <stdlib.h>

float findbig(float a,float b,float c)
{
	float big;
	if(a>=b&&a>=c)
		big = a;
	if(b>=a&&b>=c)
		big = b;
	if(c>=a&&c>=b)
		big = c;
	return big;
}

void main()
{
	float x,y,z;
	float big;
	
	printf("Enter 3 floats : ");
	scanf("%f %f %f",&x,&y,&z);
	
	big = findbig(x,y,z);
	printf("The largest value is %f\n",big);
	
	//another way to call non-void function  
	//printf("The largest value is %f\n",findbig(x,y,z));
	
	//system("PAUSE");
}

/*
Enter 3 floats : 100.111 100.099 100.101
The largest value is 100.111000
Press any key to continue . . .
*/
