#include<stdio.h>
void main()
{
	int k,i=40,x=10,y=100,p=50,q=150;

	printf("The value of i is %d\n",i);
	k=i++;
	printf("After i++ the value is:%d\n",k);
	i=40;
	k=++i;
	printf("After ++i the value is:%d\n",k);
	x=x++*10;
	printf("After post incr the value is:%d\n",x);
	y=++x*10;

	printf("After pre inc the value is:%d\n",y);
	
	p=p--/3;

	printf("After post decr the value is:%d\n",p);
	q=--p/3;
	
	printf("After pre decr the value is:%d\n",q);
}
