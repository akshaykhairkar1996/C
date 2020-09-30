#include<stdio.h>
void sum_avg(int);

void main()
{
	int n;
	printf("Enter the total count of  number\n");
	scanf("%d",&n);
	sum_avg(n);
}

void sum_avg(int n)
{ int sum1=0, a[n];
	printf("Enter the numbers\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		sum1+=a[j];
	}
	printf("The sum is: %d\n", sum1);
	float avg=(float)sum1/n;
	printf("The average is: %f\n", avg);

}

