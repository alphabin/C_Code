//CS36 - Program #8
//Name : Chatura Ahangama

/* NOTES
#SHORT CUT OPERATORS
x=x+2; -> x+=2;
y=y-5; -> y-=5;
a=a*7; -> a*=7;
c=c/4; -> c/=4;
d=d%4; -> d%=4;
% operator - integer remainder(modulo)
             works only for integer
#IN/DECREMENT OPERATORS
a++; -> post increment
++a; -> pre increment
a--; -> post decrement
--a; -> pre decrement
*/


#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a=5;
	a++;
	printf("%d\n",a);
	++a;
	printf("%d\n",a);
	--a;
	printf("%d\n",a);
	a--;
	printf("%d\n",a);

	//system("PAUSE");
}

/*
6
7
6
5
Press any key to continue . . .
*/