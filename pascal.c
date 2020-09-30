
#include<stdio.h>
void main()
{
int i, j,q,r,k,res=1;

	printf("Enter the no. of rows");
	scanf("%d",&q);
for(i=1;i<=q;i++)
{
		
	for(j=5;j>=i;j--)
	{
		printf(" ");
	}
	for(k=1;k<=(2*i)-1;k++)
	{
		if(k%2==0)
		{
			printf(" ");
		}
		else if(k==1 || k==2*i-1)
			{
				printf("1");
			}
		else
		{
			res=res*(k-i+1)/i;	
			printf("%d",res);
			}
	}
	printf("\n");
}
}
