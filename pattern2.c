
#include<stdio.h>
void main()
{
int i, j,q;
for(i=1;i<=5;i++)
{
		
	for(j=5;j>i;j--)
	{
		printf(" ");
	}
	for(q=1;q<=i;q++)
	{
		printf("%d",i);
	}
	printf("\n");
}
}
