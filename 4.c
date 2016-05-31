//CS36 - Program #4
//Name : Chatura Ahangama


//formatting output

/* NOTES
#character constants(printf)
\b - backspace
\n - new line
\r - return
\t - tab 
\" - print "
\' - print '
\\ - print \(backslash)

#placeholders
%d - int
%f - float
%ld- long
%lf- double
%c - char
%s - string
%% - print %
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a = 10;
	float b = 123.456;

	printf("%d\n",a);
	printf("%f\n",b);
	printf("%0.2f\n",b);
	printf("$%0.2f\n",b);
	printf("$%8.2f\n",b);

	//system("PAUSE");
}

/*
10
123.456001
123.46
$123.46
$  123.46
Press any key to continue . . .
*/