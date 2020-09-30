#include<stdio.h>
int fact(int);
void main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("The factorial of the number is:%d\n",fact(a));
}

int fact(int n)
{
	int res;
	if(n==0)
	{
		return 1;
	}else
		res=fact(n-1)*n;
	return res;
}


