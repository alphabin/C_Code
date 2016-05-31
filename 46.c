//CS36 - Program #46
//Name : Chatura Ahangama

/* NOTES
#RECURSION
main function -> function a -> b -> c -> d (Iterative)
main function -> function a -> a -> a -> a (Recursive)

whenever possible, use iteration over recursion, why -> faster and less memory.

Factorial
 fact(n) = n * fact(n-1)
 fact(n) = { 1 (if n=0)
		   { n*fact(n-1) (if n>0)

*/


#include <stdio.h>
#include <stdlib.h>

long fact(int n)
{
	if(n==0)
		return 1;
	return n*fact(n-1);
}

long squaretwo(int n)
{
	if(n==0)
		return 1;
	return 2*squaretwo(n-1);
}

int fib(int n)
{
	if(n==1||n==2)
		return 1;
	return fib(n-1) + fib(n-2);
}

void main()
{
	int n;
	printf("Enter an integer : ");
	scanf("%d",&n);
	printf("%d! is %d\n",n,fact(n));
	printf("2^%d is %d\n",n,squaretwo(n));
	printf("Fibonacci : %dth number : %d\n",n,fib(n));
	//system("PAUSE");
}

