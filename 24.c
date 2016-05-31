//CS36 - Program #24
//Name : Chatura Ahangama


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void load(char *n,int *sh,float *bp,float *cp)
{
	printf("Enter stock name : ");
	gets(n);
	printf("Enter number of shares, buy price, and current price : ");
	scanf("%d %f %f",&*sh,&*bp,&*cp);
}

void calc(float *bt,float *ct,float *pr,int sh,float bp,float cp)
{
	*bt = sh * bp;
	*ct = sh * cp;
	*pr = *ct - *bt;
}

void print(char *n,float bt,float ct, float pr)
{
	printf("Stock Name : %s\n",n);
	printf("Your total amount of buying is : $%.2f\n",bt);
	printf("Your total amount of current is : $%.2f\n",ct);
	printf("Your Profit is : $%.2f\n\n\n",pr);
}



void main()
{
	char stkname[20];
	int sh;
	float bp, cp;
	float Buy_t, Curr_t, profit;
	
	load(stkname,&sh,&bp,&cp);
	calc(&Buy_t,&Curr_t,&profit,sh,bp,cp);
	print(stkname,Buy_t,Curr_t,profit);
	fflush(stdin);
	
	load(stkname,&sh,&bp,&cp);
	calc(&Buy_t,&Curr_t,&profit,sh,bp,cp);
	print(stkname,Buy_t,Curr_t,profit);
	fflush(stdin);

	load(stkname,&sh,&bp,&cp);
	calc(&Buy_t,&Curr_t,&profit,sh,bp,cp);
	print(stkname,Buy_t,Curr_t,profit);
	fflush(stdin);

	system("PAUSE");
}

/*
Enter stock name : IBM
Enter number of shares, buy price, and current price : 150 11.33 13.33
Stock Name : IBM
Your total amount of buying is : $1699.50
Your total amount of current is : $1999.50
Your Profit is : $300.00


Enter stock name : ORACLE
Enter number of shares, buy price, and current price : 215 10.77 12.25
Stock Name : ORACLE
Your total amount of buying is : $2315.55
Your total amount of current is : $2633.75
Your Profit is : $318.20


Enter stock name : SUN MICRO
Enter number of shares, buy price, and current price : 355 25.55 35.75
Stock Name : SUN MICRO
Your total amount of buying is : $9070.25
Your total amount of current is : $12691.25
Your Profit is : $3621.00


Press any key to continue . . .
*/