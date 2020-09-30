#include<stdio.h>
void leap(int);

void main()
{
	int y;
	printf("Enter the year\n");
	scanf("%d",&y);
	leap(y);
}

void leap(int a)
{
	if(a%4==0 && a%100==0 && a%400==0)
	{
		printf("Leap Year\n");
	}
	else if(a%4==0 && a%100==0 && a%400!=0)
	{
		printf("Not a leap year\n");
	}
	else if(a%4==0 && a%100!=0)
	{
		printf("leap year\n");
	}
	else
		printf("Not a leap year\n");

}



