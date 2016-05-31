//CS36 - Program #31
//Name : Chatura Ahangama


//Convert Celcius to Fahrenheit
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int c;
	float f;
	printf("C          F\n");
	for(c=-20;c<=70;c+=5)
	{
		f = (float)9/5*c+32;
		printf("%d          %.2f\n",c,f);
	}
	//system("PAUSE");
}

/*
C          F
-20          -4.00
-15          5.00
-10          14.00
-5          23.00
0          32.00
5          41.00
10          50.00
15          59.00
20          68.00
25          77.00
30          86.00
35          95.00
40          104.00
45          113.00
50          122.00
55          131.00
60          140.00
65          149.00
70          158.00
Press any key to continue . . .
*/