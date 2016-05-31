//CS36 - Program #5
//Name : Chatura Ahangama

//to see how placeholders and their options work

/* NOTES
%5d  - minimum 5 chars
%-5d - left justify
%5.3 - mininum 5 chars with 3 digits
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i;
	float x;
	i = 40;
	x = 839.21;

	printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
	printf("|%0.3f|%10.3e|%-10g|\n",x,x,x);

	//system("PAUSE");
}

/*
|40|   40|40   |  040|
|839.210|8.392e+002|839.21    |
Press any key to continue . . .
*/
