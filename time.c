#include<stdio.h>
void main()
{
	int hh,mm,ss;
	long time;
	printf("Enter the hrs, minutes and seconds respectively of time\n");
	scanf("%d %d %d",&hh,&mm,&ss);
	time=(hh*60*60)+(mm*60)+ss;
	printf("The total time in second is:%ld\n",time);
}


