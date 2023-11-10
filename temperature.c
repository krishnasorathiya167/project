#include<stdio.h>

main()
{
	float f,c;
	printf("Enter Temperature =");
	scanf("%f",&c);
	f = c*9/5+32;
	printf(" Fahrenheit = %.2f",f);
}