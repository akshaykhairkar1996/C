#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a and b:\n");
	scanf("%d %d",&a,&b);
	a=a^b, b=a^b, a=a^b;
	printf("After swapping the value of a & b are: %d %d\n",a,b);
}

