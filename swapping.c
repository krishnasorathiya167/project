#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("value of A =");
	scanf(" %d",&a);
	printf("value of B =");
	scanf(" %d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("swapping value of A = %d\n",a);
	printf("swapping value of B = %d\n",b);
	
	int x,y;
	
	printf("value of X =");
	scanf(" %d",&x);
	printf("value of Y =");
	scanf(" %d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("swapping value of X = %d\n",x);
	printf("swapping value of Y = %d",y);	
}